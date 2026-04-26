#include "GamePlay.h"
#include <thread>
#include <chrono>

GamePlay::GamePlay(string n)
{
    name = n;
}

void GamePlay::Update()
{
    for (int i = 1; i <= 5; i++)
    {
        this_thread::sleep_for(chrono::milliseconds(100));

        cout << name << ": " << (i * 20) << "% Complete" << endl;
    }
}