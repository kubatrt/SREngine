//
// Created by jburzyns on 2/17/2016.
//

#ifndef SRENGINE_APPLICATION_HPP
#define SRENGINE_APPLICATION_HPP

#include "SREngine.h"

namespace SREngine {

    class CApplication
    {
    public:
        virtual void OnStartup() = 0;

        virtual void OnShutdown() = 0;

        virtual void OnUpdate(float deltaTime) = 0;

        virtual void OnDraw() = 0;

        virtual void OnInput(InputType type, void *input) = 0;

        virtual void OnEvent(EventType type, void *event) = 0;
    };

}

#endif //SRENGINE_APPLICATION_HPP
