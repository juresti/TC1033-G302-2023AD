//Clase Foco del ejemplo Lampara

#include "Foco.hpp"
#include <string>
using namespace std;

Foco::Foco() : luminosidad{60}, color{"Blanco"} {}
Foco::Foco(int lum,string col) : luminosidad{lum}, color{col}{}

int Foco::getLuminosidad(){return luminosidad;}
string Foco::getColor(){return color;}
