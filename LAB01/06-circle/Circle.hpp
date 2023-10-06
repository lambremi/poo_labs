#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle {
    public:
        Circle(double radius);
        void setRadius();
        double getRadius();
        void computeCircumference();
        void computeArea();
    private:
        double radius;
};

#endif