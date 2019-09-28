// Cameron Cunningham - 100651616
#include "Wrapper.h"
SaveClass saveClass;

int saveFile(float x, float z)
{
	return saveClass.saveFile(x, z);
}
int loadFile()
{
	return saveClass.loadFile();
}