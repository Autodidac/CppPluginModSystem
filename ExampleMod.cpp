#include "pch.h"
#include "ExampleMod.h"


void ExampleMod::Initialize(GameModifier* engine) {
    this->engine = engine;
    engine->PrintMessage("ExampleMod initialized!");
}

void ExampleMod::Update(float deltaTime) {
    engine->PrintMessage("ExampleMod updating...");
}

void ExampleMod::Shutdown() {
    engine->PrintMessage("ExampleMod shutting down...");
}

extern "C" MOD_API Mod* CreateMod() {
    return new ExampleMod();
}

extern "C" MOD_API void DestroyMod(Mod* mod) {
    delete mod;
}

//int Version() const override { return 1; }
