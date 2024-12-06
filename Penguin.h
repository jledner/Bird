#ifndef SEAGULL_H
#define SEAGULL_H

#include "Bird.h"
#include <iostream>

class Penguin : public Bird {

private:
    string sound;

public:
    Penguin(string color, string b) : Bird(color) {
        sound = b;
    }
    void walk() {
        cout << "The penguin is waddling" << endl;
    }
    virtual void makeSound() {
        cout << sound;
    }
    virtual void makeSound(string s) {
        cout << s;
    }
};


#endif