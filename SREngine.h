//
// Created by Kuba on 2016-02-16.
//

#ifndef SRENGINE_SRENGINE_H
#define SRENGINE_SRENGINE_H

namespace SREngine
{

    enum class EventType { Focus, Resize };

    enum class InputType { Keyboard, Mouse };

    class CApplication
    {
    public:
        virtual void OnStartup() = 0;
        virtual void OnShutdown() = 0;
        virtual void OnUpdate(float deltaTime) = 0;
        virtual void OnDraw() = 0;
        virtual void OnInput(InputType type, void* input) = 0;
        virtual void OnEvent(EventType type, void* event) = 0;
    };

}


#endif //SRENGINE_SRENGINE_H
