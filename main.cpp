#include <iostream>
#include <memory>
#include "SREngine.h"

using namespace std;

class MyApplication : public SREngine::CApplication
{
public:
    virtual void OnStartup() {  cout << "OnStartup!" << endl; }
    virtual void OnShutdown() { cout << "OnShutdown!" << endl; }
    virtual void OnUpdate(float deltaTime) {}
    virtual void OnDraw() {}
    virtual void OnInput(SREngine::InputType type, void* input) {}
    virtual void OnEvent(SREngine::EventType type, void* event) {}
};

std::unique_ptr<SREngine::CApplication> CreateApplication()
{
    return std::unique_ptr<MyApplication>();
}

int main()
{
    cout << "Hello, SREngine!" << endl;

    std::unique_ptr<SREngine::CApplication>  app(CreateApplication());

    app->OnStartup();

    float dt = 0;
    bool run = false;
    while(run)
    {
        app->OnUpdate(dt);
        app->OnDraw();
    }

    app->OnShutdown();

    return 0;
}