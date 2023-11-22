//Clase Apagador del ejemplo de Lampara
#include "Apagador.hpp"

Apagador::Apagador(){encendido = false;}
void Apagador::encender(){encendido = true;}
void Apagador::apagar() {encendido = false;}
bool Apagador::isEncendido() {return encendido;}
