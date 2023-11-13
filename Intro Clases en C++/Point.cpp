#include <cmath>

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
