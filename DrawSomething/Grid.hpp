#pragma once

#include <stdio.h>
#include <raylib.h>
#include "Position.hpp"

//#define NUM_ROW 30
//#define NUM_COL 30
#define CELL_SIZE 30


class Grid{
public:
    Grid();
    void drawGrid();
    void updateGrid(int newX, int newY);
    bool checkStatus(int newX, int newY);

    
private:
    //grid of positions
    Position** grid;
    const int NUM_ROW = 30;
    const int NUM_COL = 30;
};


