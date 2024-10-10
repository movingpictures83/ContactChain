#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "ContactChainPlugin.h"

void ContactChainPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void ContactChainPlugin::run() {}

void ContactChainPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "contact-chainID";
myCommand += " ";
addRequiredParameterNoFlag("pdbfile");
addRequiredParameterNoFlag("chainID");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<ContactChainPlugin> ContactChainPluginProxy = PluginProxy<ContactChainPlugin>("ContactChain", PluginManager::getInstance());
