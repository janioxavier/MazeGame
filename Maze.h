/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Maze.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:25 PM
 */
#include "Room.h"
#include <vector>

#ifndef MAZE_H
#define MAZE_H

class Maze {
public:
    Maze();
    Maze(const Maze& orig);
    void addRoom(Room* r1)
    { rooms.push_back(r1);}
    virtual ~Maze();
private:
    std::vector<Room*> rooms;
};

#endif /* MAZE_H */

