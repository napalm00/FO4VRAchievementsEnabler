// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FO4VRACHIEVEMENTSENABLER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FO4VRACHIEVEMENTSENABLER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FO4VRACHIEVEMENTSENABLER_EXPORTS
#define FO4VRACHIEVEMENTSENABLER_API __declspec(dllexport)
#else
#define FO4VRACHIEVEMENTSENABLER_API __declspec(dllimport)
#endif

// This class is exported from the FO4VRAchievementsEnabler.dll
class FO4VRACHIEVEMENTSENABLER_API CFO4VRAchievementsEnabler {
public:
	CFO4VRAchievementsEnabler(void);
	// TODO: add your methods here.
};

extern FO4VRACHIEVEMENTSENABLER_API int nFO4VRAchievementsEnabler;

FO4VRACHIEVEMENTSENABLER_API int fnFO4VRAchievementsEnabler(void);
