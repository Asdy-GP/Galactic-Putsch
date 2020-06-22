#include <iostream>
#include "Pretendants.h"

using namespace std;




int main()
{
    string choice;


    cout<<  "  Galactic Putsch"  <<endl;
    cout<<  "\n  Menu:"  <<endl;
    cout<<  "\n  1: Nouvelle Partie"  <<endl;
    cout<<  "  2: Exit"  <<endl;
    cout<<  "\n  Choisissez une option: "  <<endl;
    cout<<endl;
    cout<<endl;
    Pretendant p=Pretendant();
    p.creerPret("Le Kahn");
    p.printinfo();

    return 0;
}




































































