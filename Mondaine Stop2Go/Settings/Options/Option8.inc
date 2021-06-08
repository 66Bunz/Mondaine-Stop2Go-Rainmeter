
[SectionHeader8]
Meter=String
Text=[#S8H]
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
DynamicVariables=1

[Variables]
OptionVariantsButton8_1=00000055
OptionVariantsButton8_2=00000055
OptionVariantsButton8_3=00000055
OptionInfoButton8=00000055
OptionCloseButtonColour8=00000055

[OverlayBackground8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 0,0,350,600,6,6 | Fill Color 000000aa | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursor=0
Hidden=1

[OptionTitle8]
Meter=String
Text=[#S8Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
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
Text=[#S8Dsc]
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

[OptionWindow8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 20,20,310,202,6,6 | Fill Color 222222 | StrokeWidth 0
Hidden=1

[OptionWindowTitle8]
Meter=String
Group=OptionWindow8
Text=[#S8WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=15
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc8]
Meter=String
Group=OptionWindow8
Text=[#S8WDsc1]
Text=Choose what language you want to set.
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

[OptionWindowDescLink8]
Meter=String
Group=OptionWindow8
Text=[#S8WDsc2]
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



;-----------------------
;Languages

[OptionVariantsButton8_1]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 35,125,75,35,12,12 | Fill Color #OptionVariantsButton8_1# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton8_1 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton8_1 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow8][!WriteKeyValue Variables Lang "1" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText8_1]
Meter=String
Group=OptionWindow8
Text=[#S8WO1]
X=72
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton8_2]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 133,125,75,35,12,12 | Fill Color #OptionVariantsButton8_2# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton8_2 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton8_2 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow8][!WriteKeyValue Variables Lang "2" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText8_2]
Meter=String
Group=OptionWindow8
Text=[#S8WO2]
X=170
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton8_3]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 231,125,75,35,12,12 | Fill Color #OptionVariantsButton8_3# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton8_3 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton8_3 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow8][!WriteKeyValue Variables Lang "3" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText8_3]
Meter=String
Group=OptionWindow8
Text=[#S8WO3]
X=268
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1



;------------
;Info

[OptionInfoButton8]
Meter=Shape
Group=OptionWindow8 | InfoTt
Shape=Rectangle 280,177,25,25,12,12 | Fill Color #OptionInfoButton8# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionInfoButton8 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionInfoButton8 00000055][!Update]
MouseActionCursor=1
DynamicVariables=1
Hidden=1

[OptionInfoText8]
Meter=String
Group=OptionWindow8
Text=?
X=292
Y=188
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
ToolTipTitle=[#S8WITtl]
ToolTipText=[#S8WIDsc]
ToolTipIcon=Question
AntiAlias=1
ClipString=1
Hidden=1



;------------
;Close

[OptionCloseButton8]
Meter=Shape
Group=OptionWindow8
Shape=Rectangle 35,172,75,35,12,12 | Fill Color #OptionCloseButtonColour8# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionCloseButtonColour8 00000022][!Update]
MouseLeaveAction=[!SetVariable OptionCloseButtonColour8 00000055][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow8][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionCloseText8]
Meter=String
Group=OptionWindow8
Text=[#S8WCls]
X=73
Y=187
FontFace=Quicksand Medium
FontSize=11
FontColor=eeeeee
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1
