#ifndef CONTACTCHAINPLUGIN_H
#define CONTACTCHAINPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class ContactChainPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "ContactChain";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
