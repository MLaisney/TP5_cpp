#include <iostream>
#include "Heros.h"
#include "Jedis.h"
#include "Siths.h"
#include "Humains.h"
#include "Robots.h"

using namespace std;

int main() 
{

// Création des tous les objets Heros
Heros yoda("Maitre Yoda", 260, "Sabre Laser", 50); 
Heros luke("Luke Skywalker", 450, "Sabre Laser", 50); 
Heros leia("Princesse Leia", 100, "Pistolet Laser", 30);
Heros solo("Han Solo", 150, "Pistolet Laser", 30);
Heros palpatine("Empereur Palpatine", 250, "Sabre Laser", 50); 
Heros vador("Dark Vador", 400, "Sabre Laser", 50);
Heros r2d2("R2D2", 50, "Pistolet Laser", 30);
Heros c3po("C-3PO", 80, "Laser", 30);

yoda.afficher();
luke.afficher();
palpatine.afficher();
vador.afficher();
leia.afficher();
solo.afficher();
r2d2.afficher();
c3po.afficher();

return 0;
}