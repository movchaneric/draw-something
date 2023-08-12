#pragma once

#include <stdio.h>
#include <iostream>
#include "Grid.hpp"
#include "Colors.hpp"

class Game{
public:
    Game();
    
    void draw();
    void UserPressDraw();
    void drawCube(int& mouseX, int& mouseY);
    void updateGrid(int x, int y);
    
    Grid gameGrid;
private:
    
};
