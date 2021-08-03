
[SectionHeader1]
Meter=String
Text=[#SH1]
X=30
Y=(55 + #anchor#)
FontFace=Quicksand Medium
FontSize=14
FontColor=#FontColor1#
StringAlign=LeftTop
InlineSetting=Weight | 700
AntiAlias=1
ClipString=1
Container=OptionContainer
DynamicVariables=1

[Variables]
OptionVariantsButton1_1=#VariantButtonColor#,85
OptionVariantsButton1_2=#VariantButtonColor#,85
OptionVariantsButton1_3=#VariantButtonColor#,85
OptionCloseButtonColor1=#VariantButtonColor#,85

[OverlayBackground1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 0,0,350,600,6,6 | Fill Color #BackgrColor2#,170 | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursor=0
Hidden=1

[OptionTitle1]
Meter=String
Text=[#O1Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
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
Text=[#O1Dsc]
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

[OptionWindow1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 20,20,310,202,6,6 | Fill Color #BackgrColor3# | StrokeWidth 0
Hidden=1

[OptionWindowTitle1]
Meter=String
Group=OptionWindow1
Text=[#O1WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=15
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc1]
Meter=String
Group=OptionWindow1
Text=[#O1WDsc1]
X=35
Y=+1R
W=280
FontFace=Nunito
FontSize=11
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Hidden=1

[OptionWindowDescLink1]
Meter=String
Group=OptionWindow1
Text=[#O1WDsc2]
X=35
Y=3R
W=280
InlineSetting=
FontFace=Nunito
FontSize=9
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
LeftMouseUpAction=
Hidden=1

[OptionVariantsButton1_1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 35,132,75,35,12,12 | Fill Color #OptionVariantsButton1_1# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_1 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_1 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 0 "#@#SettingsLog/SettingsLog.inc"][!RefreshGroup "RefreshGroup"][!Update][Wait 1]

DynamicVariables=1
Hidden=1

[OptionVariantsText1_1]
Meter=String
Group=OptionWindow1
Text=[#O1WO1]
X=72
Y=147
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton1_2]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 133,132,75,35,12,12 | Fill Color #OptionVariantsButton1_2# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_2 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_2 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 1 "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText1_2]
Meter=String
Group=OptionWindow1
Text=[#O1WO2]
X=170
Y=147
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton1_3]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 230,132,80,35,12,12 | Fill Color #OptionVariantsButton1_3# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton1_3 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton1_3 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!WriteKeyValue Variables Variant 2 "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText1_3]
Meter=String
Group=OptionWindow1
Text=[#O1WO3]
X=270
Y=147
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionCloseButton1]
Meter=Shape
Group=OptionWindow1
Shape=Rectangle 35,178,75,35,12,12 | Fill Color #OptionCloseButtonColor1# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionCloseButtonColor1 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionCloseButtonColor1 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow1][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionCloseText1]
Meter=String
Group=OptionWindow1
Text=[#O1WCls]
X=73
Y=193
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1
