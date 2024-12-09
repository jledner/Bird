#include "Penguin.h"

Penguin::Penguin(string color, string b) : Bird(color) {
    sound = b;
}
void Penguin::walk() const {
    cout << "The penguin (colored " << color << ") is waddling" << endl;
}

void Penguin::makeSound() const {
    cout << "The penguin is " << sound << "ing" << endl;
}

void Penguin::makeSound(string s) const {
    cout << s << endl;
}