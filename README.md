# CppPluginModSystem
A C++20 Plugin Mod System for Gamedev w/ cert authentication


Basically I had to stop working on this because code certifications cost about $130 a year, so I have no way to test it further for now.

The ExampleMod is meant to be it's own dll in a folder named "mods" as a seperate project.

There are a couple of macros BUILDING_MOD for the mods preprocessor, that just tells the ModInterface.h which project it's in, and is required for all mods.
The other is GENERATE_HASH_LIST which the main application uses because I put in a hacky way for it to spit out the hash code, without a certification it will produce only OS errors.

It depends on openssl that I installed via vcpkg. it's written in C++20 because <filesystem>
