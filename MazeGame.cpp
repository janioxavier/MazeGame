/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MazeGame.cpp
 * Author: francisco
 * 
 * Created on April 15, 2016, 10:26 PM
 */

#include <iostream>

#include "MazeGame.h"

MazeGame::MazeGame() {
}

MazeGame::MazeGame(const MazeGame& orig) {
}

Maze* MazeGame::CreateMaze(MazeFactory& factory) {
    Maze* aMaze = factory.MakeMaze();
    Room* r1 = factory.MakeRoom(1);
    Room* r2 = factory.MakeRoom(2);
    Door* aDoor = factory.MakeDoor(r1, r2);
    
    aMaze->addRoom(r1);
    aMaze->addRoom(r2);
    
    r1->setSide(new Direction("North"), factory.MakeWall());
    r1->setSide(new Direction("East"), aDoor);
    r1->setSide(new Direction("South"), factory.MakeWall());
    r1->setSide(new Direction("West"), factory.MakeWall());
    
    std::cout << r1->toString() << std::endl;
    
    r2->setSide(new Direction("North"), factory.MakeWall());
    r2->setSide(new Direction("East"), factory.MakeWall());
    r2->setSide(new Direction("South"), factory.MakeWall());
    r2->setSide(new Direction("West"), aDoor);
    
    std::cout << r2->toString() << std::endl;
    return aMaze;    
}

MazeGame::~MazeGame() {
}

