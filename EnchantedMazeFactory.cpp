/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EnchantedMazeFactory.cpp
 * Author: francisco
 * 
 * Created on April 15, 2016, 11:38 PM
 */

#include "EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory() {
}

EnchantedMazeFactory::EnchantedMazeFactory(const EnchantedMazeFactory& orig) {
}

Spell* EnchantedMazeFactory::CastSpell() const {
    return new Spell();
}

EnchantedMazeFactory::~EnchantedMazeFactory() {
}

