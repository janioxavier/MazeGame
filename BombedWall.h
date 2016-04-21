/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BombedWall.h
 * Author: francisco
 *
 * Created on April 16, 2016, 1:22 AM
 */
#include "Wall.h"
#ifndef BOMBEDWALL_H
#define BOMBEDWALL_H

class BombedWall : public Wall{
public:
    BombedWall();
    BombedWall(const BombedWall& orig);
    std::string toString() const
    { return "bombed wall";}
    
    virtual ~BombedWall();
private:

};

#endif /* BOMBEDWALL_H */

