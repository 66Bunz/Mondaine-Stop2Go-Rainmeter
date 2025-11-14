[OptionTitle11]
Group=UserOpt
Meter=String
Text=[#O11Ttl]
X=30
Y=10R
FontFace=Nunito Bold
FontSize=11
FontColor=#FontColor1#
StringAlign=LeftTop
AntiAlias=1
ClipString=1
Container=OptionContainer

[OptionColour11]
Meter=Image
ImageName=#@#Images\colorPalette.png
X=284
Y=7r
W=24
H=24
ImageTint=[#LogoColor2]
Container=OptionContainer
LeftMouseUpAction=["#@#Addons\RainRGB4.exe" "VarName=LogoColor2" "FileName=#@#SettingsLog/SettingsLog.inc"][!Refresh][!RefreshGroup "RefreshGroup"]

[OptionDesc11]
Group=UserOpt
Meter=String
Text=[#O11Dsc]
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
