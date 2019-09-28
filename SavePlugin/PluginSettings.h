// Cameron Cunningham - 100651616
#pragma once
#ifdef SAVEPLUGIN_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#elif SAVEPLUGIN_IMPORTS
#define PLUGIN_API __declspec(dllimport)
#else
#define PLUGIN_API
#endif

//Referneced from Tutorial2 Code