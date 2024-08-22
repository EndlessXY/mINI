#include <iostream>
#include <string>
#include "mini/ini.h"


int main(int argc, char** argv)
{
    std::string ip;
    mINI::INIFile file("config.ini");
    mINI::INIStructure ini;
    bool readSuccess = file.read(ini);
    if (readSuccess)
    {
        ip = ini["local_mqtt"]["ip_address"];
        std::cout << "IP: " << ip << std::endl;
    }
    else
    {
        std::cout << "Failed to read config.ini" << std::endl;
    }
}
