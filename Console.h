/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Console.h
 * Author: francisco
 *
 * Created on April 16, 2016, 1:27 AM
 */
#include <iostream>
#ifndef CONSOLE_H
#define CONSOLE_H

class Console {
public:
    Console();
    Console(const Console& orig);
    void writeMessage(const char* message);
    virtual ~Console();
private:

};

#endif /* CONSOLE_H */

