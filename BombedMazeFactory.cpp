/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BombedMazeFactory.cpp
 * Author: francisco
 * 
 * Created on April 15, 2016, 11:44 PM
 */

#include "BombedMazeFactory.h"
#include "BombedWall.h"
#include "RoomWithBomb.h"

BombedMazeFactory::BombedMazeFactory() {
}

BombedMazeFactory::BombedMazeFactory(const BombedMazeFactory& orig) {
}

Wall* BombedMazeFactory::MakeWall() const {
    return new BombedWall();
}

Room* BombedMazeFactory::MakeRoom(int n) const{
    return new RoomWithBomb(n);
}

BombedMazeFactory::~BombedMazeFactory() {
}

