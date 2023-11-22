#ifndef LAMPARA_HPP
#define LAMPARA_HPP

#include "Apagador.hpp"
#include "Foco.hpp"
#include <string>

class Lampara{
private:
    std::string color;
    float costo;
    Foco foco;
    Apagador apagador;
public:
    Lampara();
    Lampara(std::string,float);
    std::string getColor();
    float getCosto();
    void setCosto(float);
    std::string encender();
    std::string apagar();
    bool isEncendida();
    std::string cambiarFoco(int,std::string);
    std::string colorFoco();
    int luminosidadFoco();
};
#endif
