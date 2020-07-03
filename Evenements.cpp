#include "Evenements.h"

using namespace std;

Evenement::Evenement(string l,string e,string q1, string q2, string q3,string qd)
{
    lore = l;
    effet = e;
    quete1 = q1;
    quete2 = q2;
    quete3 = q3;
    qdesti = qd;
    tour = 0;
}
