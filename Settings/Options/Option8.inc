
[Variables]
OptionCloseButtonColor8=#VariantButtonColor#,85

[SectionHeader4]
Meter=String
Text=[#SH4]
X=30
Y=20R
FontFace=Quicksand Medium
FontSize=14
FontColor=#FontColor1#
StringAlign=LeftTop
InlineSetting=Weight | 700
AntiAlias=1
ClipString=1
Container=OptionContainer

[OverlayBackground8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 0,0,350,600,6,6 | Fill Color #BackgrColor2#,170 | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursorName="C:\Windows\Cursors\aero_arrow.cur"
Hidden=1

[OptionTitle8]
Meter=String
Text=[#O8Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionArrow8]
Meter=Image
ImageName=#@#Images\rightArrow.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!ShowMeterGroup OptionWindow8][!Update]

[OptionDesc8]
Meter=String
Text=[#O8Dsc]
X=30
Y=-6R
W=240
FontFace=Nunito
FontSize=9
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer

[OptionWindow8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 20,20,310,160,6,6 | Fill Color #BackgrColor3# | StrokeWidth 0
Hidden=1

[OptionWindowTitle8]
Meter=String
Group=OptionWindow8
Text=[#O8WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc8]
Meter=String
Group=OptionWindow8
Text=[#O8WDsc1]
X=35
Y=5R
W=280
FontFace=Nunito
FontSize=9
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionTextSubtitle8]
Meter=String
Group=OptionWindow8
Text=[#O8WDsc2]: 200
X=35
Y=1R
W=280
FontFace=Nunito
FontSize=7
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1


[OptionTextBackgrounds8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 35,135,150,35,12,12 | Fill Color #VariantButtonColor#,85 | StrokeWidth 0
LeftMouseUpAction=[!CommandMeasure OptionInput8 "ExecuteBatch 1"]
MouseActionCursorName=Text
Hidden=1


[OptionTextDefault8]
Meter=String
Group=OptionWindow8
Text=#SkinSize#
X=50
Y=142
W=120
FontFace=Nunito
FontSize=11
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionCloseButton8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 213,135,75,35,12,12 | Fill Color #OptionCloseButtonColor8# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionCloseButtonColor8 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionCloseButtonColor8 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow8]
DynamicVariables=1
Hidden=1

[OptionCloseText8]
Meter=String
Group=OptionWindow8
Text=[#O8WCls]
X=250
Y=150
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionInput8]
Measure=Plugin
Plugin=InputText
X=46
Y=143
W=120
H=25
DefaultValue=#SkinSize#
FontFace=Segoe UI
FontSize=10
FontColor=#FontColor2#
SolidColor=171717
FocusDismiss=1
AntiAlias=1
InputLimit=128
StringAlign=LeftCenter
Command1=[!WriteKeyValue Variables SkinSize "$UserInput$" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]
