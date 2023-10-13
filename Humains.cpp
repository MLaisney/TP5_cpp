#include <stdio.h>
#include "Humains.h"
#include <string>

using namespace std;

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme):
Heros (nomheros, vieheros, nomarme, puissancearme), m_forcepoing(50) // Constructeur avec les attributs du Heros à déterminer et m_forcepoing à 50
{
}

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme, int forcepoing):
Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing (forcepoing) // Constructeur avec tous les attributs à déterminer
{
}

void Humains::coupDePoing(Heros &cible)
{
    cout << m_nomheros << " attaque avec une force de " << m_forcepoing << endl;
    cible.diminuerVie(m_forcepoing);
}

void Humains::afficher() const
{
    Heros::afficher();
    cout << "Niveau du Coup de Poing : " << m_forcepoing << endl;
}