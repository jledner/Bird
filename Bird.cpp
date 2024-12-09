#include "Bird.h"

#include <iostream>
#include <string>

using namespace std;

Bird::Bird() {
    this->color = "n/a";
    cout << "Using the Bird() constructor" << endl;
}


Bird::Bird(string color) {
    this->color = color;
}

void Bird::makeSound() const {
    cout << "The bird ( colored: " << getColor() << ") is making a sound." << endl;
}

void Bird::eat() const {
    cout << "The bird (colored: " << getColor() << ") is eating." << endl;
}

void Bird::walk() const {
    cout << "The bird (colored: " << getColor() << ") is walking." << endl;
}
