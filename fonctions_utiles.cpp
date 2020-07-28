#include <iostream>
#include "fonctions_utiles.h"

using namespace std;

bool unicSujet(Sujet s1, vector<Pretendant> pret, int nbj)
{
    for (int i=0; i < nbj; i++)
    {
        if (s1.getnameSujet() == pret[i].getSujet(0).getnameSujet()) return false;
    }
    return true;
}


bool verifEvent(vector<Evenement> eve, int size, string dejavu)
{
    for (int i=0; i<size; i++)
    {
        if (dejavu==eve[i].getnameEvenement()) return false;
    }
    return true;
}

bool verifSujet(vector<Sujet> suj, int size, string dejavu)
{
    for (int i=0; i<size; i++)
    {
        if (dejavu==suj[i].getnameSujet()) return false;
    }
    return true;
}


bool verifPret(vector<Pretendant> pret, int size, string dejavu)
{
    for (int i=0; i<size; i++)
    {
        if (dejavu==pret[i].getnamePret()) return false;
    }
    return true;
}

int convert(string nb)
{
    if (nb=="2") return 2;
    if (nb=="3") return 3;
    if (nb=="4") return 4;
    if (nb=="5") return 5;
    return 0;
}
