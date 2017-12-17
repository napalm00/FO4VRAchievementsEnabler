// FO4VRAchievementsEnabler.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "FO4VRAchievementsEnabler.h"


// This is an example of an exported variable
FO4VRACHIEVEMENTSENABLER_API int nFO4VRAchievementsEnabler=0;

// This is an example of an exported function.
FO4VRACHIEVEMENTSENABLER_API int fnFO4VRAchievementsEnabler(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see FO4VRAchievementsEnabler.h for the class definition
CFO4VRAchievementsEnabler::CFO4VRAchievementsEnabler()
{
    return;
}
