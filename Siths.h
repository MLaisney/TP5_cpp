#ifndef Siths_h
#define Siths_h

#include "Heros.h"

class Siths : public Heros
{
public:
    void utiliserLeCoteObscur();
private:
    int m_coteobscur;
};
#endif