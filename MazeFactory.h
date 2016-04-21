/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MazeFactory.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:20 PM
 */

#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H


class MazeFactory {
public:
    MazeFactory();
    MazeFactory(const MazeFactory& orig);
    
    virtual Maze* MakeMaze() const
    { return new Maze;}
    virtual Wall* MakeWall() const
    {   return new Wall;}
    virtual Room* MakeRoom(int n) const
    {return new Room(n);}
    virtual Door* MakeDoor(Room* r1, Room* r2) const
    { return new Door(r1, r2); }
    virtual ~MazeFactory();
private:

};

#endif /* MAZEFACTORY_H */

