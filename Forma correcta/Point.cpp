//Funcionalidad de la clase Point
#include "Point.hpp"
#include <cmath>

Point::Point() : x{1.0},y{1.0} {}
Point::Point(double newX,double newY) : x{newX},y{newY} {}

double Point::getX() {return x;}
double Point::getY() {return y;}

void Point::setX(double newX) {x = newX;}
void Point::setY(double newY) {y = newY;}

double Point::distance(Point punto){
    return sqrt(pow(punto.getX() - getX(),2) + 
                pow(punto.getY() - getY(),2));
}
