
[SectionHeader5]
Meter=String
Text=[#SH5]
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
DynamicVariables=1

[Variables]
OptionVariantsButton9_1=#VariantButtonColor#,85
OptionVariantsButton9_2=#VariantButtonColor#,85
OptionVariantsButton9_3=#VariantButtonColor#,85
OptionInfoButton9=#VariantButtonColor#,85
OptionCloseButtonColor9=#VariantButtonColor#,85

[OverlayBackground9]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 0,0,350,600,6,6 | Fill Color #BackgrColor2#,170 | StrokeWidth 0
LeftMouseUpAction=[]
MouseActionCursor=0
Hidden=1

[OptionTitle9]
Meter=String
Text=[#O9Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionArrow9]
Meter=Image
ImageName=#@#Images\rightArrow.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!ShowMeterGroup OptionWindow9][!Update]

[OptionDesc9]
Meter=String
Text=[#O9Dsc]
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

[OptionWindow9]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 20,20,310,202,6,6 | Fill Color #BackgrColor3# | StrokeWidth 0
Hidden=1

[OptionWindowTitle9]
Meter=String
Group=OptionWindow9
Text=[#O9WTtl]
X=35
Y=35
FontFace=Nunito Bold
FontSize=15
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Hidden=1

[OptionWindowDesc9]
Meter=String
Group=OptionWindow9
Text=[#O9WDsc1]
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

[OptionWindowDescLink9]
Meter=String
Group=OptionWindow9
Text=[#O9WDsc2]
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



; -----------------------
; Languages

[OptionVariantsButton9_1]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 35,125,75,35,12,12 | Fill Color #OptionVariantsButton9_1# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton9_1 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton9_1 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow9][!WriteKeyValue Variables Lang "1" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText9_1]
Meter=String
Group=OptionWindow9
Text=[#O9WO1]
X=72
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton9_2]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 133,125,75,35,12,12 | Fill Color #OptionVariantsButton9_2# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton9_2 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton9_2 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow9][!WriteKeyValue Variables Lang "2" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText9_2]
Meter=String
Group=OptionWindow9
Text=[#O9WO2]
X=170
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1

[OptionVariantsButton9_3]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 231,125,75,35,12,12 | Fill Color #OptionVariantsButton9_3# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionVariantsButton9_3 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionVariantsButton9_3 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow9][!WriteKeyValue Variables Lang "3" "#@#SettingsLog/SettingsLog.inc"][!Update][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionVariantsText9_3]
Meter=String
Group=OptionWindow9
Text=[#O9WO3]
X=268
Y=140
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1



; ------------
; Info

[OptionInfoButton9]
Meter=Shape
Group=OptionWindow9 | InfoTt
Shape=Rectangle 280,177,25,25,12,12 | Fill Color #OptionInfoButton9# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionInfoButton9 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionInfoButton9 #VariantButtonColor#,85][!Update]
MouseActionCursor=1
DynamicVariables=1
Hidden=1

[OptionInfoText9]
Meter=String
Group=OptionWindow9
Text=?
X=292
Y=188
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
ToolTipTitle=[#O9WITtl]
ToolTipText=[#O9WIDsc]
ToolTipIcon=Question
AntiAlias=1
ClipString=1
Hidden=1



; ------------
; Close

[OptionCloseButton9]
Meter=Shape
Group=OptionWindow9
Shape=Rectangle 35,172,75,35,12,12 | Fill Color #OptionCloseButtonColor9# | StrokeWidth 0
MouseOverAction=[!SetVariable OptionCloseButtonColor9 #VariantButtonColor#,34][!Update]
MouseLeaveAction=[!SetVariable OptionCloseButtonColor9 #VariantButtonColor#,85][!Update]
LeftMouseUpAction=[!HideMeterGroup OptionWindow9][!RefreshGroup "RefreshGroup"]
DynamicVariables=1
Hidden=1

[OptionCloseText9]
Meter=String
Group=OptionWindow9
Text=[#O9WCls]
X=73
Y=187
FontFace=Quicksand Medium
FontSize=11
FontColor=#FontColor1#
StringAlign=CenterCenter
AntiAlias=1
ClipString=1
Hidden=1
