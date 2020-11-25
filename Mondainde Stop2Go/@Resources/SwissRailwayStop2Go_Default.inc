[Variables]

;--------------
; IMPOSTAZIONI DI GRANDEZZA PREDEFINITE
;grandezza skin (modificare il file "Settings.inc")
SkinSize=200
;cornice orologio, 0=senza cornice, 1=con cornice (modificare il file "Settings.inc")
ClockBezelExists=1

;--------------
; IMPOSTAZIONI DI GRANDEZZA
@Include=#@#Settings.inc

;--------------
; IMPOSTAZIONI COLORI PREDEFINITI
;colori sfondo 
ClockBackgroundColor=0,0,0,255
;colori componenti 
ClockElementsColor=255,255,255,255
;colore ghiera 
BezelColor=128,128,128,255
;colore lancetta secondi 
SecondHandColor=205,29,29,255

;--------------------------------------------------------------------------------------------------
;NON MODIFICARE SE NON SAI QUELLO CHE FAI
;--------------------------------------------------------------------------------------------------


;--------------
; CONTROLLI DEL TEMPO
GainRatio=0.034483
MinuteHandMotionDuration = 0.1

;--------------
; OPZIONI COMPONENTI
NumberOfHourMarkers=12
NumberOfMinuteMarkers=60

HandWidth=(floor(#ClockDiameter#*0.038))
HourHandLength=(floor(#ClockDiameter#*0.27))
MinuteHandLength=(floor(#ClockDiameter#*0.43))
HandBacksideLength=(floor(-#ClockDiameter#*0.14))

ClockBezelWidth=(floor(#ClockBezelExists#?#SkinSize#*0.025:0))
ClockPadding=(#ClockBezelWidth#)
ClockDiameter=(#SkinSize#-#ClockPadding#*2)

ClockRadius=(#ClockDiameter#/2)
ClockEdgeWidth=(#ClockDiameter#*0.025)

;--------------
SCRIPT=#@#scripts/
INC=#@#includes/


;--------------------------------------------------------------------------------------------------
;--------------------------------------------------------------------------------------------------
[Rainmeter]
Update=20



;--------------
; MISURE
[MeasureTime]
Measure=Time

[MeasureSmoothTime]
Measure=SCRIPT
ScriptFile=#SCRIPT#Progress.lua

[MeasureOne]
Measure=Calc
Formula=1
UpdateDivider=-1

;--------------
; STILI
[styleCircle]
H=(#SkinSize#)
W=(#SkinSize#)
UpdateDivider=-1
Solid=1
AntiAlias=1

[styleMarker]
LineColor=#ClockElementsColor#
H=(#ClockDiameter#)
W=(#ClockDiameter#)
X=(-#ClockRadius#)
LineLength=(#ClockRadius#-#ClockEdgeWidth#)
StartAngle=(3/2*PI)
Solid=0
AntiAlias=1
UpdateDivider=-1

[styleMarkerMinute]
LineStart=(#MinuteHandLength#-1)
LineWidth=(#ClockDiameter#*0.010417)

[styleMarkerHour]
LineStart=(#ClockDiameter#*0.366667)
LineWidth=#HandWidth#

[styleHand]
LineColor=#ClockElementsColor#
H=(#ClockDiameter#)
W=(#ClockDiameter#)
X=#ClockPadding#
Y=#ClockPadding#
LineLength=(#ClockRadius#-#ClockEdgeWidth#)
StartAngle=(3/2*PI)
Solid=0
AntiAlias=1

[styleHourHand]
LineLength=#HourHandLength#
LineStart=#HandBacksideLength#
LineWidth=#HandWidth#

[styleMinuteHand]
LineLength=#MinuteHandLength#
LineStart=#HandBacksideLength#
LineWidth=#HandWidth#

[styleSecondHand]
LineLength=(#ClockDiameter#*0.35)
LineStart=(-#ClockDiameter#*0.125)
LineWidth=(#ClockDiameter#*0.013)
LineColor=#SecondHandColor#

[styleSecondHandBall]
Solid=1
LineLength=(#ClockDiameter#*0.037)
LineColor=#SecondHandColor#

;--------------
; CONTATORI
[MeterClockBackground]
Meter=Roundline
LineColor=#ClockBackgroundColor#
LineStart=0
LineLength=(#ClockRadius#)
MeterStyle=styleCircle
StartAngle=4.712
RotationAngle=6.283

[MinuteMarkers]
Measure=Script
ScriptFile=#SCRIPT#Factory.lua
IncFile=#INC#MinuteMarkers.inc
Number=(#NumberOfMinuteMarkers#)
SectionName=MinuteMarker%%
Option0=Meter
Value0=Roundline
Option1=MeterStyle
Value1=styleMarker|styleMarkerMinute
Option2=TransformationMatrix
Value2={cos(2*PI/#NumberOfMinuteMarkers#*%%)};{-sin(2*PI/#NumberOfMinuteMarkers#*%%)};{sin(2*PI/#NumberOfMinuteMarkers#*%%)};{cos(2*PI/#NumberOfMinuteMarkers#*%%)};{(1-sin(2*PI/#NumberOfMinuteMarkers#*%%))*#ClockRadius#+#ClockPadding#};{(1-cos(2*PI/#NumberOfMinuteMarkers#*%%))*#ClockRadius#+#ClockPadding#}
UpdateDivider=-1
@Include=#INC#MinuteMarkers.inc

[HourMarkers]
Measure=Script
ScriptFile=#SCRIPT#Factory.lua
IncFile=#INC#HourMarkers.inc
Number=(#NumberOfHourMarkers#)
SectionName=HourMarker%%
Option0=Meter
Value0=Roundline
Option1=MeterStyle
Value1=styleMarker|styleMarkerHour
Option2=TransformationMatrix
Value2={cos(2*PI/#NumberOfHourMarkers#*%%)};{-sin(2*PI/#NumberOfHourMarkers#*%%)};{sin(2*PI/#NumberOfHourMarkers#*%%)};{cos(2*PI/#NumberOfHourMarkers#*%%)};{(1-sin(2*PI/#NumberOfHourMarkers#*%%))*#ClockRadius#+#ClockPadding#};{(1-cos(2*PI/#NumberOfHourMarkers#*%%))*#ClockRadius#+#ClockPadding#}
UpdateDivider=-1
@Include=#INC#HourMarkers.inc

[MeasureMinutesAndHours]
Measure=Calc
Formula=(floor(MeasureSmoothTime/60)+min((MeasureSmoothTime%60)/#MinuteHandMotionDuration#-1,0))
OnChangeAction=[!UpdateMeasureGroup MeasuresThatUpdateOncePerMinute][!UpdateMeterGroup HandsThatUpdateOncePerMinute]

[MeasureMinutes]
Measure=Calc
Formula=MeasureMinutesAndHours%60/60
Group=MeasuresThatUpdateOncePerMinute
UpdateDivider=-1

[MeasureHours]
Measure=Calc
Formula=MeasureMinutesAndHours%720/720
Group=MeasuresThatUpdateOncePerMinute
UpdateDivider=-1

[MeasureSeconds]
Measure=Calc
Formula=((MeasureSmoothTime%60)+min((MeasureSmoothTime%60)*#GainRatio#,60-(MeasureSmoothTime%60)))/60


[MeterHourHand]
; lancetta ore
Meter=Roundline
MeterStyle=styleHand|styleHourHand
Group=HandsThatUpdateOncePerMinute
MeasureName=MeasureHours
UpdateDivider=-1

[MeterMinuteHand]
; lancetta minuti
Meter=Roundline
MeterStyle=styleHand|styleMinuteHand
Group=HandsThatUpdateOncePerMinute
MeasureName=MeasureMinutes
UpdateDivider=-1

[MeterSecondHand]
; lancetta secondi
Meter=Roundline
MeterStyle=styleHand|styleSecondHand
MeasureName=MeasureSeconds

[MeterSecondHandBall]
; palla lancetta secondi
Meter=Roundline
MeterStyle=styleHand|styleSecondHandBall
MeasureName=MeasureOne
TransformationMatrix=1;0;0;1;(sin(2*PI*[MeasureSeconds])*#ClockDiameter#*0.313492);(-cos(2*PI*[MeasureSeconds])*#ClockDiameter#*0.313492)
DynamicVariables=1

[MeterSecondHandHub]
; perno lancetta secondi
Meter=Roundline
MeterStyle=styleHand|styleSecondHandBall
MeasureName=MeasureOne
LineLength=(#ClockDiameter#*0.017)
DynamicVariables=1
UpdateDivider=-1

[MeterSpindle]
; perno
Meter=Roundline
MeterStyle=styleHand|styleSecondHandBall
MeasureName=MeasureOne
LineLength=(#ClockDiameter#*0.0048)
LineColor=128,128,128,255
DynamicVariables=1
UpdateDivider=-1

[MeterBezel]
; cornice
Meter=Roundline
MeterStyle=styleCircle
LineLength=(#SkinSize#/2)
LineStart=(#SkinSize#/2-#ClockBezelWidth#)
Hidden=(#ClockBezelExists#?0:1)
LineColor=#BezelColor#

[sRefresher]
Measure=Script
ScriptFile=#SCRIPT#Refresher.lua
UpdateDivider=-1
Refreshed=0
