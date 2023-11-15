//Archivo de cabecera de la clase Point

#ifndef POINT_HPP
#define POINT_HPP

class Point{
private:
    double x;
    double y;
public:
    Point();
    Point(double,double);
    double getX();
    double getY();
    void setX(double);
    void setY(double);
    double distance(Point);
};

#endif
