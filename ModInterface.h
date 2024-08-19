#pragma once

#include <iostream>

#ifdef _WIN32
#ifdef BUILDING_MOD
#define MOD_API __declspec(dllexport)
#else
#define MOD_API __declspec(dllimport)
#endif
#else
#define MOD_API
#endif

class GameModifier;

class MOD_API Mod {
public:
    virtual ~Mod() = default;
    virtual void Initialize(GameModifier* engine) = 0;
    virtual void Update(float deltaTime) = 0;
    virtual void Shutdown() = 0;
    virtual std::string Version() const = 0;
};

extern "C" MOD_API Mod* CreateMod();
extern "C" MOD_API void DestroyMod(Mod* mod);
