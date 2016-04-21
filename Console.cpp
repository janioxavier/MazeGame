/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Console.cpp
 * Author: francisco
 * 
 * Created on April 16, 2016, 1:27 AM
 */

#include "Console.h"

Console::Console() {
}

Console::Console(const Console& orig) {
}

void Console::writeMessage(const char* message) {
    std::cout << message + '\n';
}

Console::~Console() {
}

