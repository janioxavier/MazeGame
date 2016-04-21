/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EnchantedMazeFactory.h
 * Author: francisco
 *
 * Created on April 15, 2016, 11:38 PM
 */
#include "MazeFactory.h"
#include "EnchantedRoom.h"
#include "DoorNeedingSpell.h"


#ifndef ENCHANTEDMAZEFACTORY_H
#define ENCHANTEDMAZEFACTORY_H

class EnchantedMazeFactory : public MazeFactory{
public:
    EnchantedMazeFactory();
    EnchantedMazeFactory(const EnchantedMazeFactory& orig);
    
    Room* MakeRoom(int n) const
    { return new EnchantedRoom(n, CastSpell());}
        
    
    Door* MazeDoor(Room* r1, Room* r2) const
    { return new DoorNeedingSpell(r1, r2);}
    virtual ~EnchantedMazeFactory();
    
protected:    
    Spell* CastSpell() const;

};

#endif /* ENCHANTEDMAZEFACTORY_H */

