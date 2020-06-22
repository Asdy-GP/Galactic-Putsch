#include <iostream>
#include "Pretendants.h"

using namespace std;




int main()
{
    string choice = "";
    string name;


    cout<<  "  Galactic Putsch"  <<endl;
    cout<<  "\n  Menu:"  <<endl;
    cout<<  "\n  1: Nouvelle Partie"  <<endl;
    cout<<  "  2: Exit"  <<endl;

    do
    {
            cout<<  "\n  Choisissez une option valable: ";
            getline(cin,choice);
            cout<<endl;
    }while(choice!="0"&&choice!="1");

    cout<<endl;

    do
    {
        cout << "  Choisissez un nom valable parmi - Le Kahn, Prince Gorio, Kerval, Galar, Apolion, Clara Mars, Mere Syndra, M4RK, Mu, Val : ";
        getline(cin,name);
        cout<<endl;
    }while(name != "Le Kahn" && name != "Prince Gorio" && name != "Kerval" && name != "Galar" && name != "Apolion" && name != "Clara Mars" && name != "Mere Syndra" && name != "M4RK" && name != "Mu" && name != "Val");

    cout<<endl;
    cout<<endl;

    Pretendant p=Pretendant();
    p.creerPret(name);
    p.printinfo();


    return 0;
}




































































