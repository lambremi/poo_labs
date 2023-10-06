#include <iostream>
#include "Circle.hpp"

using namespace std;

int main( void ) {
    Circle c(5);
    while(1) {
        c.setRadius();
        if (cin.fail()) break;
        c.computeCircumference();
        c.computeArea();
    }
}
