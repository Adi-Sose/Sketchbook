## Installation tasks

### Windows

#### .NET Core 3.1 SDK
1. Download and install from [this link](https://dotnet.microsoft.com/download/dotnet-core/thank-you/sdk-3.1.102-windows-x64-installer)

#### MinGW
1. Install from [this link](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/)
2. Run MinGW installation manager
   * Mark `mingw32-gcc-g++-bin` for installation
   * Mark `mingw32-gcc-objc-bin` for installation
3. Run `mingw-get.exe install gdb` in cmd
4. View Advanced system settings -> Environment variables -> Path - > Add `C:\MinGW\bin`

### Linux
 
* .NET Core 3.1 SDK
* Clang
* gdb

### VS Code

#### Extensions:
  * C/C++
  * C#
  * Roslynator
  * [Auto-Launch Profile](https://docs.google.com/uc?export=download&id=1exsOT6VAjH5oqem4id3KWKiRXXEI80jn)
