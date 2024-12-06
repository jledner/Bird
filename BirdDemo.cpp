#include "Seagull.h"
#include "Bird.h"
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
    cout << "The following are from seagull 2: " << endl;
    gull2.eat();
    gull2.fly();
    gull2.printColor();
    return 0;
}