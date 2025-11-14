
[CheckOption10]
Measure=Calc
Formula=1
IfCondition=[#LogoExists[#Variant]] = 1
IfTrueAction=[!SetOption OptionBox10 ImageName "#@#Images\checkboxFull.png"]
IfFalseAction=[!SetOption OptionBox10 ImageName "#@#Images\checkboxEmpty.png"]
IfCondition2=[#LogoExists[#Variant]] > 1
IfTrueAction2=[!WriteKeyValue Variables LogoExists[#Variant] "0" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionTitle10]
Group=UserOpt
Meter=String
Text=[#O10Ttl]
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

[OptionBox10]
Meter=Image
ImageName=#@#Images\checkboxEmpty.png
X=288
Y=10r
W=16
H=16
Container=OptionContainer
LeftMouseUpAction=[!WriteKeyValue Variables LogoExists[#Variant] "([#LogoExists[#Variant]] + 1)" "#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc10]
Group=UserOpt
Meter=String
Text=[#O10Dsc]
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
