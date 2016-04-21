/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MazeGame.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:26 PM
 */

#include "Maze.h"
#include "MazeFactory.h"

#ifndef MAZEGAME_H
#define MAZEGAME_H

class MazeGame {
public:
    MazeGame();
    MazeGame(const MazeGame& orig);
    Maze* CreateMaze(MazeFactory& factory);
    virtual ~MazeGame();
private:

};

#endif /* MAZEGAME_H */

