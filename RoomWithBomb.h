/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RoomWithBomb.h
 * Author: francisco
 *
 * Created on April 15, 2016, 11:46 PM
 */

#ifndef ROOMWITHBOMB_H
#define ROOMWITHBOMB_H
#include <string>
#include "Room.h"

class RoomWithBomb : public Room{
public:
    RoomWithBomb();
    RoomWithBomb(const RoomWithBomb& orig);
    RoomWithBomb(int n) : Room(n) {}
    std::string toString() const
    { return "room" + this->n;}
    virtual ~RoomWithBomb();
private:    
};

#endif /* ROOMWITHBOMB_H */

