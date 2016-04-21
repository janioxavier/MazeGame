/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Wall.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:30 PM
 */

#include "BorderElement.h"

#ifndef WALL_H
#define WALL_H

class Wall : public BorderElement{
public:
    Wall();
    Wall(const Wall& orig);
    virtual std::string toString() {return "";};
    const char* nameElement()
    { return "wall";}
    virtual ~Wall();
private:

};

#endif /* WALL_H */

