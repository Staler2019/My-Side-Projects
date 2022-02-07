@ECHO OFF
SET BINDIR=%~dp0
CD /D "%BINDIR%"
java -Xmx2560m -Xms720m -server -XX:ParallelGCThreads=4 -Xincgc -XX:+UseConcMarkSweepGC -XX:+UseParNewGC -XX:+CMSIncrementalPacing -XX:+AggressiveOpts -XX:+CMSParallelRemarkEnabled -XX:+DisableExplicitGC -XX:MaxGCPauseMillis=500 -XX:SurvivorRatio=16 -XX:TargetSurvivorRatio=90 -XX:+UseAdaptiveGCBoundary -XX:-UseGCOverheadLimit -Xnoclassgc -XX:UseSSE=3 -XX:PermSize=128m -XX:LargePageSizeInBytes=4m -jar minecraft_server.1.8.9.jar nogui
pause