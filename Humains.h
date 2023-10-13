#ifndef Humains_h
#define HUmains_h

#include "Heros.h"

class Humains : public Heros
{
public:
    void coupDePoing();
private:
    int m_forcepoing;
};

#include "Heros.cpp"

#endif