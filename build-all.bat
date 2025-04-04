@ECHO OFF
REM Build Everything

ECHO "Building everything..."


PUSHD BitForge.Engine
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% && exit)

PUSHD BitForge.TestBed
CALL build.bat
POPD
IF %ERRORLEVEL% NEQ 0 (echo Error:%ERRORLEVEL% && exit)

ECHO "All assemblies built successfully."
