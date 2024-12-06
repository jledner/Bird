#ifndef SEAGULL_H
#define SEAGULL_H

#include "Bird.h"
#include <iostream>

class Seagull : public Bird {
public:
    Seagull() {
        cout << "Using the Seagull() constructor" << endl;
    }
    Seagull(string color) : Bird(color) {}
    void printColor() { cout << "The color of the seagull is " << color; }
    virtual void fly() {
        cout << "The seagull is flying" << endl;
    }
    virtual void eat() const {
        cout << "The seagull (colored: " << getColor() << ") is eating." << endl;
    }
};

#endif