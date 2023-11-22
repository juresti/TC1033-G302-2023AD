//Clase Foco del ejemplo Lampara

#ifndef FOCO_C
#define FOCO_C

#include <string>
using namespace std;
class Foco{
private:
    int luminosidad;
    string color;
public:
    Foco();
    Foco(int lum,string color);

    int getLuminosidad();
    string getColor();
};// Clase Foco

#endif
