
[CheckOption3]
Measure=Calc
Formula=1
IfCondition=[#SoundExists] = 1
IfTrueAction=[!SetOption OptionBox3 ImageName "#@#Images\checkboxFull.png"]
IfFalseAction=[!SetOption OptionBox3 ImageName "#@#Images\checkboxEmpty.png"]
IfCondition2=[#SoundExists] > 1
IfTrueAction2=[!WriteKeyValue Variables SoundExists "0" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionTitle3]
Group=UserOpt
Meter=String
Text=[#O3Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer
DynamicVariables=1
ToolTipTitle=[#O3WITtl]
ToolTipText=[#O3WIDsc]
ToolTipIcon=Question

[OptionBox3]
Meter=Image
ImageName=#@#Images\checkboxEmpty.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!WriteKeyValue Variables SoundExists "([#SoundExists] + 1)" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc3]
Group=UserOpt
Meter=String
Text=[#O3Dsc]
X=30
Y=-5R
W=240
FontFace=Nunito
FontSize=9
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer
ToolTipTitle=[#O3WITtl]
ToolTipText=[#O3WIDsc]
ToolTipIcon=Question
