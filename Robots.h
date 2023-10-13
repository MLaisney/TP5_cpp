#ifndef Robots_h
#define Robots_h

#include "Heros.h"

class Robots : public Heros
{
public:
    void utiliserLesGadgets();
private:
    int m_forcegadgets;
};

#include "Heros.cpp"

#endif