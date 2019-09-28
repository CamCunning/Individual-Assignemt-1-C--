// Cameron Cunningham - 100651616
#include "SaveFunc.h"
#include <iostream>
#include <fstream>
using namespace std;

int SaveClass::saveFile(float x, float z)
{
	ofstream saveState("saveFile.txt");

	if (saveState.is_open())
	{
		saveState << x;
		saveState << z;
		saveState.close();
	}
	else cout << "unable to open file";
	return 0;
}

int SaveClass::loadFile()
{
	ifstream saveState("saveFile.txt");
	if (saveState.is_open())
	{
		cout << "test";
		saveState.close();
	}
	else cout << "unable to open file";
	return 0;
}
