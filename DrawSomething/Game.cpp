#include "Game.hpp"

Game::Game(){
    UserPressDraw();
}

void Game::draw(){
    gameGrid.drawGrid();
}

void Game::drawCube(int& mouseX, int& mouseY){
    //update grid after click
    gameGrid.updateGrid(mouseY, mouseX);
    
}


void Game::UserPressDraw(){
    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
        //get mouse coordiantes
        int mouseX = GetMouseX();
        int mouseY = GetMouseY();
        
        //calculte to get the right cell to draw in.
        int newX = (mouseX / CELL_SIZE) % CELL_SIZE;
        int newY = (mouseY / CELL_SIZE) % CELL_SIZE;
        
        drawCube(newX, newY);
    }
    
}
