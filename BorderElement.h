/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BorderElement.h
 * Author: francisco
 *
 * Created on April 15, 2016, 11:00 PM
 */

#include <string>

#ifndef BORDERELEMENT_H
#define BORDERELEMENT_H

class BorderElement {
public:    
    virtual const char* nameElement()
    { return "Border element";}
    virtual std::string toString()
    { return "border element";}
};

#endif /* BORDERELEMENT_H */

