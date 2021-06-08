
[Variables]
optionCloseButtonColour7=00000055

[SectionHeader4]
Meter=String
Text=[#S4H]
X=30
Y=20R
FontFace=Quicksand Medium
FontSize=14
FontColor=eeeeee
StringAlign=LeftTop
InlineSetting=Weight | 700
AntiAlias=1
ClipString=1
Container=OptionContainer

[OverlayBackground7]
Meter=Shape
Group=OptionWindow7
Shape=Rectangle 0,0,350,600,6,6 | Fill Color 000000aa | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursorName="C:\Windows\Cursors\aero_arrow.cur"
Hidden=1

[OptionTitle7]
Meter=String
Text=[#S4Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionArrow7]
Meter=Image
ImageName=#@#Images\rightArrow.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!ShowMeterGroup OptionWindow7][!Update]

[OptionDesc7]
Meter=String
Text=[#S4Dsc]
X=30
Y=-6R
W=240
FontFace=Nunito
FontSize=9
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer

[OptionWindow7]
Meter=Shape
Group=OptionWindow7
Shape=Rectangle 20,20,310,160,6,6 | Fill Color 222222 | StrokeWidth 0
Hidden=1

[OptionWindowTitle7]
Meter=String
Group=OptionWindow7
Text=[#S4WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc7]
Meter=String
Group=OptionWindow7
Text=[#S4WDsc1]
X=35
Y=5R
W=280
FontFace=Nunito
FontSize=9
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionTextSubtitle7]
Meter=String
Group=OptionWindow7
Text=[#S4WDsc2]: 200
X=35
Y=1R
W=280
FontFace=Nunito
FontSize=7
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1


[OptionTextBackgrounds7]
Meter=Shape
Group=OptionWindow7
Shape=Rectangle 35,135,150,35,12,12 | Fill Color 00000055 | StrokeWidth 0
LeftMouseUpAction=[!CommandMeasure OptionInput7 "ExecuteBatch 1"]
MouseActionCursorName=Text
Hidden=1


[OptionTextDefault7]
Meter=String
Group=OptionWindow7
Text=#SkinSize#
X=50
Y=142
W=120
FontFace=Nunito
FontSize=11
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionCloseButton7]
Meter=Shape
Group=OptionWindow7
Shape=Rectangle 213,125,75,35,12,12 | Fill Color #optionCloseButtonColour7# | StrokeWidth 0
MouseOverAction=[!SetVariable optionCloseButtonColour7 00000022][!Update]
MouseLeaveAction=[!SetVariable optionCloseButtonColour7 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow7]
DynamicVariables=1
Hidden=1

[OptionCloseText7]
Meter=String
Group=OptionWindow7
Text=[#S4WCls]
X=250
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionInput7]
Measure=Plugin
Plugin=InputText
X=46
Y=143
W=120
H=25
DefaultValue=#SkinSize#
FontFace=Segoe UI
FontSize=10
FontColor=dddddd
SolidColor=171717
FocusDismiss=1
AntiAlias=1
InputLimit=128
StringAlign=LeftCenter
Command1=[!WriteKeyValue Variables SkinSize "$UserInput$" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]
