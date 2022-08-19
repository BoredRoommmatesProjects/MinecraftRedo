#pragma once

#include <iostream>

#include "MinecraftRedo/Config.h"
#include "MinecraftRedo/Context.h"


class Application
{
public:
    Application(const Config& config);


    void playingLoop();

private:

    void handleEvents();

    const Config m_config;
    Context m_context;


};
