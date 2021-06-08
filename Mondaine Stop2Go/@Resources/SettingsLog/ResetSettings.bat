
@echo off

title Resetting Skin Settings...

echo.
echo * Deleting backup settings...
del SettingsLogBackup.inc
echo * Backing up current settings...
ren SettingsLog.inc SettingsLogBackup.inc
echo * Loading default settings...
md temp
copy /Y SettingsLogDefaults.inc .\temp
ren .\temp\SettingsLogDefaults.ini SettingsLog.inc
copy /Y .\temp\SettingsLog.inc .\
rd /S /Q temp
goto end

:end
exit

