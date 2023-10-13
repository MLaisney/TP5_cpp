#ifndef Siths_h
#define Siths_h

#include "Heros.h"

class Siths : public Heros
{
public:
    Siths(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
    Siths(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int coteobscur);
    void utiliserLeCoteObscur();
private:
    int m_coteobscur;
};
#endif