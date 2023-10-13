#include <stdio.h>
#include "Siths.h"
#include <string>

using namespace std;

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme):
Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(80) // Constructeur avec les attributs du Heros à déterminer et m_coteobscur à 80
{
}

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme, int coteobscur) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(coteobscur) // Constructeur avec tous les attributs à déterminer
{
}

void Siths::utiliserLeCoteObscur(Heros &cible)
{
    cout << m_nomheros << " attaque avec une force de " << m_coteobscur << endl;
    cible.diminuerVie(m_coteobscur);
}