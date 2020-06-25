#include <iostream>
#include "game_state.h"

using namespace std;

int convert(string nb)
{
    if (nb=="2") return 2;
    if (nb=="3") return 3;
    if (nb=="4") return 4;
    if (nb=="5") return 5;
    return 0;
}

bool verifPret(vector<Pretendant> pret, int size, string dejavu)
{
    for (int i=0; i<size; i++)
    {
        if (dejavu==pret[i].getnamePret()) return false;
    }
    return true;
}

int main()
{
    string nb = "0";
    string choice = "";
    string name;
    game_state gs = game_state();


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
        cout << "  Indiquez le nombre de joueur (2 a 5) : ";
        getline(cin, nb);
        cout<<endl;
    }while(nb != "2" && nb != "3" && nb != "4" && nb != "5" );

    cout<<endl;


    for (int i=0; i<convert(nb); i++)
    {
        do
        {
            cout << "  Joueur "  << i <<  ",  choisissez un nom valable et qui n'est pas deja selctionne parmi - Le Kahn, Prince Gorio, Kerval, Galar, Apolion, Clara Mars, Mere Syndra, M4RK, Mu, Val : ";
            getline(cin,name);
            cout<<endl;
        }while((name != "Le Kahn" && name != "Prince Gorio" && name != "Kerval" && name != "Galar" && name != "Apolion" && name != "Clara Mars" && name != "Mere Syndra" && name != "M4RK" && name != "Mu" && name != "Val") || verifPret(gs.getVectPret(),gs.getNB_JOUEURS(),name)==false);

        gs.addPretendant(name);
    }

    cout  <<  "  Les pretendants selectionnes sont les suivants : "  <<  endl;

    for (int i=0;i<gs.getNB_JOUEURS();i++)
    {
        cout <<  gs.getPretendant(i).getnamePret() << ",  ";
    }


    cout << endl;
    cout  <<  "  Les lieux tires au sort sont les suivants : "  <<  endl;

    for (int j=0;j<24;j++)
    {
        if (gs.getLieu(j).getState()) cout <<  gs.getLieu(j).getnameLieu() << ",  ";
    }

    cout<<endl;
    cout<<endl;

    return 0;
}
