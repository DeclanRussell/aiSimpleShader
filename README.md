# aiSimpleShader
Implementation of the simple Arnold shader demonstrated here https://support.solidangle.com/display/AFMUG/Creating+a+Shader

## Installation
1. Install the Arnold SDK to somewhere on your computer. I have it in,

..C:\solidangle\releases\Arnold-X.X.X.X-platform.

2. Set a new environment variable ARNOLD_PATH to your chosen install path:

..set ARNOLD_PATH="C:\solidangle\releases\Arnold-X.X.X.X-platform"

3. Install the MtoA (Arnold for Maya) plugin for maya, from here: https://www.solidangle.com/arnold/download/

4. Build the shader with Qt. Is you're on linux or mac you can just run,

..qmake
..make clean
..make

..Or you can just open the .pro file in Qt and build it there.

5. You can test if the shader has compiled correcly by running the testScript.bat file I have included. If you get a Red sphere the shader work, pink means it has not compiled correcly.

6. Copy the simpleShader.dll you have just built and the simpleShader.mtd to %MTOA_PATH%\shaders\ where %MTOA_PATH% is wherever you installed the Arnold maya plugin.

7. Copy the mySimpleTemplate.py to %MTOA PATH%\scripts\mtoa\ui\ae\

8. You can now test if this works in maya by running the test scene mayaTestScene.mb. You should get the following result.

![alt tag](https://github.com/DeclanRussell/aiSimpleShader/blob/master/images/exampleRender.png)
