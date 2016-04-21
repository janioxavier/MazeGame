/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoorNeedingSpell.h
 * Author: francisco
 *
 * Created on April 15, 2016, 11:41 PM
 */
#include "Spell.h"
#ifndef DOORNEEDINGSPELL_H
#define DOORNEEDINGSPELL_H

#include "Door.h"

class DoorNeedingSpell : public Door{
public:
    DoorNeedingSpell();
    DoorNeedingSpell(const DoorNeedingSpell& orig);
    DoorNeedingSpell(Room* r1, Room* r2) : Door(r1, r2) {}    
    DoorNeedingSpell(Spell* spell);
    std::string toString() const {return "door";}
    const char* nameElement() const {return "door needing spell";}
    ~DoorNeedingSpell();
private:
    Spell* spell;

};

#endif /* DOORNEEDINGSPELL_H */

