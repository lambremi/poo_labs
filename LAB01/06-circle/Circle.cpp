#include <iostream>
#include "Circle.hpp"

using namespace std;

Circle::Circle(double radius) {
    this -> radius = radius;
}

void Circle::setRadius() {
    cin >> this -> radius;
}

double Circle::getRadius() {
    return this -> radius;
}

void Circle::computeCircumference() {
    cout << "P = " << 3.14*2*this->getRadius() << " m" << endl;
}

void Circle::computeArea() {
    cout << "A = " << 3.14*(this->getRadius())*(this->getRadius()) << " m²"<< endl;
}