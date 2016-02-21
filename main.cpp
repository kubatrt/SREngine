#include <iostream>
#include <memory>
#include "SREngine.h"
#include "Application.hpp"
#include "Singleton.hpp"

using namespace std;

namespace SRE = SREngine;

class Game : public SREngine::CApplication  //, SRE::Singleton<Game>
{
public:
    Game() {}
    Game(const Game&) = delete;
    Game& operator= (const Game&) = delete;


    virtual void OnStartup() {  cout << "OnStartup!" << endl; }
    virtual void OnShutdown() { cout << "OnShutdown!" << endl; }
    virtual void OnUpdate(float deltaTime) {}
    virtual void OnDraw() {}
    virtual void OnInput(SREngine::InputType type, void* input) {}
    virtual void OnEvent(SREngine::EventType type, void* event) {}
};

std::unique_ptr<SREngine::CApplication> CreateApplication()
{
    return std::unique_ptr<Game>();
}

int main()
{
    cout << "Hello, SREngine!" << endl;

    SRE::CApplication* app = new Game();

    app->OnStartup();   // SEGV

    float dt = 0;
    bool run = false;
    while(run)
    {
        app->OnUpdate(dt);
        app->OnDraw();
    }

    app->OnShutdown();
    delete app;

    return 0;
}