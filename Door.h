/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Door.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:29 PM
 */
#include "Room.h"
#include "BorderElement.h"
#include <string>

#ifndef DOOR_H
#define DOOR_H

class Door : public BorderElement{
public:
    Door();
    Door(const Door& orig);
    Door(Room* r1, Room* r2)
    { this->r1 = r1; this->r2 = r2;}
    virtual std::string toString() const
    { return "door between" + r1->toString() + " " + r2->toString(); }
    virtual const char* nameElement() const
    { return "door";}
    ~Door();
protected:
    Room *r1, *r2;
};

#endif /* DOOR_H */

