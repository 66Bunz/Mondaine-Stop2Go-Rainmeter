
[OptionTitle6]
Group=UserOpt
Meter=String
Text=[#S3Ttl4]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionColour6]
Meter=Image
ImageName=#@#Images\colorPalette.png
X=284
Y=7r
W=24
H=24
ImageTint=#BezelColor2#
Container=OptionContainer
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=BezelColor2" "FileName=#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc6]
Group=UserOpt
Meter=String
Text=[#S3Dsc4]
X=30
Y=-11R
W=240
FontFace=Nunito
FontSize=9
FontColor=dddddd
StringAlign=LeftTop
AntiAlias=1
ClipString=2
Container=OptionContainer
