
#include "Lampara.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Lampara lamp1{};
    Lampara lamp2{"Morada",444.33};

    cout << lamp1.getColor() << endl;
    cout << lamp2.getCosto() << endl;
    lamp1.setCosto(150.50);
    cout << lamp1.getCosto() << endl;
    lamp2.encender();
    cout << lamp2.isEncendida() << endl;
    lamp2.apagar();
    cout << lamp2.isEncendida() << endl;
    lamp1.cambiarFoco(500,"Rosa");
    cout << lamp2.colorFoco() << endl;
    cout << lamp2.luminosidadFoco() << endl;
    return 0;
}
