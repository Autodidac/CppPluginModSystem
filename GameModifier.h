#pragma once

#include <iostream>
#include <string>

class GameModifier {
public:

    void PrintMessage(const std::string& message) {
        std::cout << "Mod Manager: " << message << std::endl;
    }

    //void LoadAsset(AssetType* type) {}

};
