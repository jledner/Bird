#ifndef SEAGULL_H
#define SEAGULL_H

#include "Bird.h"
#include <iostream>

class Penguin : public Bird {

private:
    string sound;

public:
    Penguin(string, string);
    void walk();
    virtual void makeSound();
    virtual void makeSound(string);
};


#endif