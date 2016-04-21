/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EnchantedRoom.h
 * Author: francisco
 *
 * Created on April 16, 2016, 12:50 AM
 */

#include "Spell.h"
#include "Room.h"

#ifndef ENCHANTEDROOM_H
#define ENCHANTEDROOM_H

class EnchantedRoom : public Room{
public:
    EnchantedRoom();
    EnchantedRoom(const EnchantedRoom& orig);
    EnchantedRoom(int n, Spell* spell)
    { this->spell = spell;}
    virtual ~EnchantedRoom();
private:
    Spell* spell;
    int n;
};

#endif /* ENCHANTEDROOM_H */

