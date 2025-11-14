
[SectionHeader3]
Group=UserOpt
Meter=String
Text=[#SH3]
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
 
[OptionTitle4]
Group=UserOpt
Meter=String
Text=[#O4Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionColour4]
Meter=Image
ImageName=#@#Images\colorPalette.png
X=284
Y=7r
W=24
H=24
ImageTint=[#ClockBackgroundColor2]
Container=OptionContainer
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=ClockBackgroundColor2" "FileName=#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc4]
Group=UserOpt
Meter=String
Text=[#O4Dsc]
X=30
Y=-11R
W=240
FontFace=Nunito
FontSize=9
FontColor=#FontColor2#
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer
