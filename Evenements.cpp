#include "Evenements.h"

using namespace std;

Evenement::Evenement(string nom, string l,string e,string q1, string q2, string q3,string qd)
{
    name = nom;
    lore = l;
    effet = e;
    quete1 = q1;
    quete2 = q2;
    quete3 = q3;
    qdesti = qd;
    tour = 0;
}
