#include <iostream>
#include <stdio.h>
#include <raylib.h>
#include "Game.hpp"



int main(int argc, const char * argv[]) {
    InitWindow(600, 600, "Draw Something");
    SetTargetFPS(60);
    
    Game* testGame = new Game();

    while(WindowShouldClose() == false){
        BeginDrawing();
        testGame->draw();
        testGame->UserPressDraw();
        
        ClearBackground(BLACK);
        EndDrawing();
    }
    //deacllocate memory
    delete testGame;
    
    return 0;
}

