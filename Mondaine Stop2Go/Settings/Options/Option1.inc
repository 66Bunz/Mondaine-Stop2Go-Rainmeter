
[SectionHeader1]
Meter=String
Text=[#S1H]
X=30
Y=(55 + #anchor#)
FontFace=Quicksand Medium
FontSize=14
FontColor=eeeeee
StringAlign=LeftTop
InlineSetting=Weight | 700
AntiAlias=1
ClipString=1
Container=OptionContainer
DynamicVariables=1

[Variables]
OptionVariantsButton1_1=00000055
OptionVariantsButton1_2=00000055
OptionVariantsButton1_3=00000055
optionCloseButtonColour1=00000055

[OverlayBackground1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 0,0,350,600,6,6 | Fill Color 000000aa | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursor=0
Hidden=1

[OptionTitle1]
Meter=String
Text=[#S1Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionArrow1]
Meter=Image
ImageName=#@#Images\rightArrow.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!ShowMeterGroup OptionWindow1][!Update]

[OptionDesc1]
Meter=String
Text=[#S1Dsc]
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

[OptionWindow1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 20,20,310,202,6,6 | Fill Color 222222 | StrokeWidth 0
Hidden=1

[OptionWindowTitle1]
Meter=String
Group=OptionWindow1
Text=[#S1WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=15
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc1]
Meter=String
Group=OptionWindow1
Text=[#S1WDsc1]
X=35
Y=+1R
W=280
FontFace=Nunito
FontSize=11
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionWindowDescLink1]
Meter=String
Group=OptionWindow1
Text=[#S1WDsc2]
X=35
Y=3R
W=280
InlineSetting=
FontFace=Nunito
FontSize=9
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
LeftMouseUpAction=
Hidden=1

[OptionVariantsButton1_1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 35,125,75,35,12,12 | Fill Color #OptionVariantsButton1_1# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_1 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_1 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 0 "#@#SettingsLog/SettingsLog.inc"][!RefreshGroup "RefreshGroup"][!Update][Wait 1]

DynamicVariables=1
Hidden=1

[OptionVariantsText1_1]
Meter=String
Group=OptionWindow1
Text=[#S1WO1]
X=72
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton1_2]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 133,125,75,35,12,12 | Fill Color #OptionVariantsButton1_2# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_2 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_2 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 1 "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText1_2]
Meter=String
Group=OptionWindow1
Text=[#S1WO2]
X=170
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton1_3]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 230,125,80,35,12,12 | Fill Color #OptionVariantsButton1_3# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_3 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_3 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 2 "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText1_3]
Meter=String
Group=OptionWindow1
Text=[#S1WO3]
X=270
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionCloseButton1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 35,172,75,35,12,12 | Fill Color #optionCloseButtonColour1# | StrokeWidth 0
MouseOverAction=[!SetVariable optionCloseButtonColour1 00000022][!Update]
MouseLeaveAction=[!SetVariable optionCloseButtonColour1 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionCloseText1]
Meter=String
Group=OptionWindow1
Text=[#S1WCls]
X=73
Y=187
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1
