
@echo off

title Resetting Skin Settings...

echo.
echo * Deleting backup settings...
del SettingsLogBackup.ini
echo * Backing up current settings...
ren SettingsLog.ini SettingsLogBackup.ini
echo * Loading default settings...
md temp
copy /Y SettingsLogDefaults.ini .\temp
ren .\temp\SettingsLogDefaults.ini SettingsLog.ini
copy /Y .\temp\SettingsLog.ini .\
rd /S /Q temp
goto end

:end
exit

