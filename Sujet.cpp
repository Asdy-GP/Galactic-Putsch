#include <iostream>
#include "Sujets.h"

using namespace std;

Sujet::Sujet(string n,string t1,string t2,string t3, int l, string d1, string d2, string d3, int no1, int no2, int no3, int nh1, int nh2, int nh3, int prio)
{
    name = n;
    type1 = t1;
    type2 = t2;
    type3 = t3;
    level = l;
    desc_niv1 = d1;
    desc_niv2 = d2;
    desc_niv3 = d3;
    niv_or1 = no1;
    niv_or2 = no2;
    niv_or3 = no3;
    niv_hon1 = nh1;
    niv_hon2 = nh2;
    niv_hon3 = nh3;
}

string Sujet::getnameSujet()
{
    return name;
}

string Sujet::gettypeSujet(int i)
{
    if (i == 1) return type1;
    if (i == 2) return type2;
    else return type3;
}
