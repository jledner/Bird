#include "Seagull.h"
#include "Bird.h"
#include "Penguin.h"
#include <string>
#include <iostream>

using namespace std;

void eat_and_make_sound(Bird);
void walk_and_make_sound(const Bird&);
void walk_and_make_sound(const Bird*);

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
    Penguin penguin("black", "chirp");
    Bird birdObj = penguin; // we won't see overriding

    Bird* pengptr1 = &penguin;
    Penguin* pengptr2 = new Penguin("tuxedo", "squawk");

    // using base class - static binding
    eat_and_make_sound(birdObj);
    walk_and_make_sound(birdObj);
    walk_and_make_sound(&birdObj);

    // using derived class - dynamic binding
    eat_and_make_sound(*pengptr1);
    walk_and_make_sound(pengptr1);
    walk_and_make_sound(*pengptr1);
    eat_and_make_sound(*pengptr2);
    walk_and_make_sound(pengptr2);
    walk_and_make_sound(*pengptr2);

    return 0;
}


/*
Pass by value (eat and make sound, walk and make sound)
Pass by reference (eat and make sound, walk and make sound)
Pass by pointer
*/

void eat_and_make_sound(Bird b) {
    b.eat();
    b.makeSound();
}
void walk_and_make_sound(const Bird& b) {
    b.walk();
    b.makeSound();
}
void walk_and_make_sound(const Bird* bptr) {
    bptr->walk();
    bptr->makeSound();
}