// Cameron Cunningham - 100651616
#pragma once
#include "PluginSettings.h"
class PLUGIN_API SaveClass
{
public:
	int saveFile(float x, float z);
	int loadFile();
	int x; //X Coordinate
	int z; //Z Coordinate from Unity
};