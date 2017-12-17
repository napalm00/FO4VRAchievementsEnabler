**Fallout 4 VR Achievements Enabler Mod**
-------------------------------------

This DLL replacement mod allows enabling achievements in Fallout 4 VR for modded games.

### **Installation**

 1. Grab the compiled DLLs from the [releases page](https://github.com/napalm00/FO4VRAchievementsEnabler/releases).
 2. Unzip the contents in your `Steam\SteamApps\common\Fallout 4 VR` directory, replacing `steam_api64.dll`. Make sure you have **both** `steam_api64.dll` and `steam_api64_org.dll` in this folder after unpacking the contents.
 3. Start the game and enjoy


### **Compiling it yourself**

 1. Open the project in Visual Studio
 2. Go to Build --> Configuration Manager and select `Release` for "Active solution configuration" and `x64` for the platform
 3. Open the project's settings, "General" --> "Target Name" and set it to `steam_api64`
 4. Again in the project's settings, "Linker" --> "Module definition file" and set it to `steam_api64.def`
 5. Compile and you'll have the patched `steam_api64.dll` in `Project\x64\Release`
 6. Remember to rename the original `steam_api64.dll` in your Fallout 4 VR directory to `steam_api64_org.dll` before moving your compiled version there.
 
 
### **Credits**

 - Sumwunn for the original [Fallout 4 Achievements Enabler Mod](https://github.com/Sumwunn/AchievementsModsEnabler) (and the patch code)
 - wwwc for his [Proxy DLL Maker](https://github.com/zeroKilo/ProxyDllMaker)
 - gir489/NTAuthority for the pattern scanner header
