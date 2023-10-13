#ifndef Jedis_h
#define Jedis_h

#include "Heros.h"

class Jedis : public Heros
{
public:
    void utiliserLaForce();
private:
    int m_force;
};

#include "Heros.cpp"

#endif