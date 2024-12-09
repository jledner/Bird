#include "Seagull.h"
#include "Bird.h"
#include "Penguin.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
    Bird bird1("red");
    bird1.eat();
    cout << "The following are from seagull 1: " << endl;
    Seagull gull1;
    Seagull gull2("gray");
    gull1.eat();
    gull1.fly();

    cout << "-----------------------------------" << endl;

    cout << "The following are from seagull 2: " << endl;
    gull2.eat();
    gull2.fly();
    gull2.printColor();


    cout << "-----------------------------------" << endl;

    cout << "The following are from penguin: " << endl;
    Penguin penguin("black", "squawk");
    Bird* pengptr1 = &penguin;
    Penguin* pengptr2 = &penguin;
    pengptr1->walk();
    pengptr1->makeSound();
    pengptr2->walk();
    pengptr2->makeSound();


    return 0;
}