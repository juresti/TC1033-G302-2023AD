// Programa para probar funcionalidad de la clase Point
#include "Point.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Point p1 {}; //default
    cout << "Valor de x = " << p1.getX() << endl;
    p1.setX(7);
    cout << "Valor de x = " << p1.getX() << endl;
    
    Point p2 {13,21}; //2 paramatros
    cout << "Valor de y = " << p2.getY() << endl;
    p2.setY(42);
    cout << "Valor de y = " << p2.getY() << endl;

    cout << "La distancia entre p1 y p2 es " << p1.distance(p2) << endl;
    return 0;
}
