#include "Penguin.h"

Penguin::Penguin(string color, string b) : Bird(color) {
    sound = b;
}
void Penguin::walk() {
    cout << "The penguin is waddling" << endl;
}

void Penguin::makeSound() {
    cout << sound;
}

void Penguin::makeSound(string s) {
    cout << s;
}