#ifndef BIRD_H
#define BIRD_H

#include <string>
using namespace std;

class Bird {
protected:
    string color;
public:
    Bird();
    Bird(string);
    string getColor() const { return color; }
    void setColor(string color) { this->color = color; }
    virtual void makeSound() const;
    void eat() const;
    virtual void walk() const;
};


#endif