#include <stdio.h>
#include "Robots.h"
#include <string>

using namespace std;

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme):
Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets (20) // Constructeur avec les attributs du Heros à déterminer et m_forcegadgets à 20
{
}

Robots::Robots(string nomheros, int vieheros, string nomarme, int puissancearme, int forcegadgets) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_forcegadgets (forcegadgets) // Constructeur avec tous les attributs à déterminer
{
}

void Robots::utiliserLesGadgets(Heros &cible)
{
    cout << m_nomheros << " attaque avec une force de " << m_forcegadgets << endl;
    cible.diminuerVie(m_forcegadgets);
}