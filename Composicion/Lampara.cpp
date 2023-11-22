#include "Lampara.hpp"
#include <string>
#include <iostream>
using namespace std;

Lampara::Lampara() : color{"Blanca"},costo{999.99},foco{Foco{}},apagador{Apagador{}} {}
Lampara::Lampara(string col,float cost) : color{col},costo{cost},foco{Foco{100,"Verde"}},apagador{Apagador{}} {}
string Lampara::getColor() {return color;}
float Lampara::getCosto() {return costo;}
void Lampara::setCosto(float c) {costo = c;}

string Lampara::encender() {
    cout << "Encendiendo la lampara\n";
    apagador.encender();
}
string Lampara::apagar(){
    cout << "Apagando la lampara\n";
    apagador.apagar();
}
    
bool Lampara::isEncendida(){
    return apagador.isEncendido();
}
    
string Lampara::cambiarFoco(int lum,string col){
    foco = Foco{lum,col};
}

string Lampara::colorFoco(){
    return foco.getColor();
}
int Lampara::luminosidadFoco() {return foco.getLuminosidad();}
