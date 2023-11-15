#include <cmath>
#include <iostream>

using namespace std;

class Point{
private:
    double x {0.0};
    double y {0.0};
public:
    //constructores
    Point() : x{1.0},y{1.0} {
        //correcto para C++
    }

    Point(double newX,double y){
        //Bien en otros lenguajes
        x = newX;
        this->y = y;
    }

    //Getters
    double getX(){
        return x;
    }
    double getY() {return y;}

    //Setters
    void setX(double newX) {
        x = newX;
    }
    void setY(double otraY){
        y = otraY;
    }

    //Metodos generales
    double distance(Point p){
        return sqrt(pow(p.getX()-getX(),2) + pow(p.getY()-getY(),2));
    }
};

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
