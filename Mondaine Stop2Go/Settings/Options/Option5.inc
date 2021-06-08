
[OptionTitle5]
Group=UserOpt
Meter=String
Text=[#S3Ttl3]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=eeeeee
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionColour5]
Meter=Image
ImageName=#@#Images\colorPalette.png
X=284
Y=7r
W=24
H=24
ImageTint=[#SecondsHandColor2]
Container=OptionContainer
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=SecondsHandColor2" "FileName=#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc5]
Group=UserOpt
Meter=String
Text=[#S3Dsc3]
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
