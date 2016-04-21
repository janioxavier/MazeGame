/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Room.cpp
 * Author: francisco
 * 
 * Created on April 15, 2016, 10:29 PM
 */

#include "Room.h"

Room::Room() {
}

Room::Room(const Room& orig) {
}

std::string Room::toString() const{
    std::string str = "the room ";
    str += this->n;
    str = str += " has ";
    std::map<Direction* const,BorderElement*>::iterator it;
    for (it = sides.begin();
            it!=sides.end(); ++it) {
        str += "one " + it->second->toString() + " on " + it->first->getDirection(); 
    }
    return str;
}

Room::~Room() {
}

