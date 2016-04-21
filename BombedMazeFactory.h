/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BombedMazeFactory.h
 * Author: francisco
 *
 * Created on April 15, 2016, 11:44 PM
 */

#include "MazeFactory.h"

#ifndef BOMBEDMAZEFACTORY_H
#define BOMBEDMAZEFACTORY_H

class BombedMazeFactory : public MazeFactory{
public:
    BombedMazeFactory();
    Wall* MakeWall() const;
    Room* MakeRoom(int n) const;        
    BombedMazeFactory(const BombedMazeFactory& orig);    
    virtual ~BombedMazeFactory();
private:

};

#endif /* BOMBEDMAZEFACTORY_H */

