// Cameron Cunningham - 100651616
#pragma once
#include "PluginSettings.h"
#include "SaveFunc.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int saveFile(float x, float z);
	PLUGIN_API int loadFile();
#ifdef __cplusplus
}
#endif

//Referenced from Tutorial 2