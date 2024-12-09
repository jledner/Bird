#ifndef PENGUIN_H
#define PENGUIN_H

#include "Bird.h"
#include <iostream>

class Penguin : public Bird {

private:
    string sound;

public:
    Penguin(string, string);
    void walk() const;
    void makeSound() const;
    void makeSound(string) const;
};


#endif