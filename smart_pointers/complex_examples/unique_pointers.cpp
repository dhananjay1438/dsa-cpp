#include <iostream>

class Shape {
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle: public Shape {

};

class Rectange: public Shape {

};

class Square: public Shape {
   
};

int main(void) {




    return 0;
}