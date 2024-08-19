#pragma once

#include "../CppPluginModSystem/GameModifier.h"
#include "../CppPluginModSystem/ModInterface.h"

class ExampleMod : public Mod {
public:
    void Initialize(GameModifier* engine) override;
    void Update(float deltaTime) override;
    void Shutdown() override;
    std::string Version() const override { return "0.0.1"; }

private:
    GameModifier* engine;
};
