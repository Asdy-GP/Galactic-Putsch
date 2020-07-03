#include <iostream>
#include "Lieux.h"

using namespace std;

Lieu::Lieu(string nl, string d)
{
    etat = false;
    nlieu = nl;
    desc = d;
}

string Lieu::getnameLieu()
{
    return nlieu;
}

bool Lieu::getState()
{
    return etat;
}

void Lieu::changeState()
{
    if (etat == true) etat = false;
    else etat = true;
}
