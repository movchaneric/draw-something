//
//  Grid.cpp
//  DrawSomething
//
//  Created by Eric Movchan on 08/08/2023.
//

#include "Grid.hpp"

Grid::Grid(){
    grid = new Position*[NUM_ROW];
    
    for(int row = 0; row < NUM_ROW; row++){
        
        grid[row] = new Position[NUM_COL];
        
        for(int col = 0; col < NUM_COL; col++){
            grid[row][col] = Position(row, col);
        }
    }
    
}

bool Grid::checkStatus(int newX, int newY){
    return grid[newX][newY].clicked;
}

void Grid::updateGrid(int newX, int newY){
    grid[newX][newY].clicked = true;
}


void Grid::drawGrid(){
    for(int r = 0; r < NUM_ROW; r++){
        for(int c = 0; c < NUM_COL; c++){
            if(grid[r][c].clicked == false){
                DrawRectangle(c * CELL_SIZE + 1, r * CELL_SIZE + 1, CELL_SIZE - 1, CELL_SIZE - 1, WHITE);
            }else{
                DrawRectangle(c * CELL_SIZE + 1, r * CELL_SIZE + 1, CELL_SIZE - 1, CELL_SIZE - 1, BLUE);
            }
        }
    }
}
