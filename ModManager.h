#pragma once

#include "ModInterface.h"
#include "GameModifier.h"
#include <vector>
#include <string>
#include <memory>
#include <filesystem>

class ModManager {
public:
    ModManager(GameModifier* engine) : engine(engine) {}

    bool LoadMods(const std::filesystem::path& modDirectory);
    void UpdateMods(float deltaTime);
    void ShutdownMods();

private:
    std::vector<std::unique_ptr<Mod>> mods;
    std::vector<void*> handles;
    GameModifier* engine;

    bool SandboxMod(const std::filesystem::path& path);
    bool ValidateMod(const std::filesystem::path& path);
    bool VerifySignature(const std::filesystem::path& path);
    bool ValidateFileIntegrity(const std::filesystem::path& path);
    std::string CalculateFileHash(const std::filesystem::path& path);

    bool LoadModDLL(const std::filesystem::path& path);
    void LoadModFilesAndDirectories(const std::filesystem::path& path);
};
