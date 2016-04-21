// -*- C++ -*-
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Direction.
 * Author: francisco
 *
 * Created on April 15, 2016, 10:38 PM
 */
#include <string>
#ifndef DIRECTION_
#define DIRECTION_

class Direction {
public:
    Direction();
    Direction(const Direction& orig);
    Direction(const char* direction) { this->direction = direction;}
    virtual std::string getDirection() {return direction;}
    virtual ~Direction();    
private:
    const char* direction;
};

#endif /* DIRECTION_ */

