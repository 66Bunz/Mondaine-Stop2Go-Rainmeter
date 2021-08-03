
[OptionTitle7]
Group=UserOpt
Meter=String
Text=[#O7Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionColour7]
Meter=Image
ImageName=#@#Images\colorPalette.png
X=284
Y=7r
W=24
H=24
ImageTint=#BezelColor2#
Container=OptionContainer
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=BezelColor2" "FileName=#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc7]
Group=UserOpt
Meter=String
Text=[#O7Dsc]
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
