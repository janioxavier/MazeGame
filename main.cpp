/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: francisco
 *
 * Created on April 15, 2016, 10:19 PM
 */

#include <cstdlib>

#include "MazeGame.h"
#include "BombedMazeFactory.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    MazeGame game;
    BombedMazeFactory factory;
    game.CreateMaze(factory);
    
    return 0;
}

