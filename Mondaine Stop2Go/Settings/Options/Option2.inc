
[SectionHeader2]
Group=UserOpt
Meter=String
Text=[#S2H]
X=30
Y=20R
FontFace=Quicksand Medium
FontSize=14
FontColor=#Color1#
StringAlign=LeftTop
InlineSetting=Weight | 700
AntiAlias=1
ClipString=1
Container=OptionContainer
DynamicVariables=1

[CheckOption2]
Measure=Calc
Formula=1
IfCondition=[#ClockBezelExists[#Variant]] = 1
IfTrueAction=[!SetOption OptionBox2 ImageName "#@#Images\checkboxFull.png"]
IfFalseAction=[!SetOption OptionBox2 ImageName "#@#Images\checkboxEmpty.png"]
IfCondition2=[#ClockBezelExists[#Variant]] > 1
IfTrueAction2=[!WriteKeyValue Variables ClockBezelExists2 "0" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionTitle2]
Group=UserOpt
Meter=String
Text=[#S2Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#Color1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer
DynamicVariables=1

[OptionBox2]
Meter=Image
ImageName=#@#Images\checkboxEmpty.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!WriteKeyValue Variables ClockBezelExists2 "([#ClockBezelExists[#Variant]] + 1)" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc2]
Group=UserOpt
Meter=String
Text=[#S2Dsc]
X=30
Y=-5R
W=240
FontFace=Nunito
FontSize=9
FontColor=#Color2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer
