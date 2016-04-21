/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Room.h
 * Author: francisco
 *
 * Created on April 15, 2016, 10:29 PM
 */
#include <map>
#include <string>
#include "Direction.h"
#include "BorderElement.h"

#ifndef ROOM_H
#define ROOM_H

class Room {
public:
    Room();
    Room(const Room& orig);
    Room(int n) 
    { this->n = n;}
    void setSide(const Direction* direction, BorderElement *bd)
        { this->sides.insert (std::pair<Direction* const,BorderElement*>(direction, bd));}
    std::string toString() const;    
    virtual ~Room();    

protected:
    std::map<Direction* const, BorderElement*> sides;
    int n;
    
};

#endif /* ROOM_H */

