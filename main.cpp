#include <iostream>
#include "game_state.h"

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

    game_state gs = game_state();

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout  <<  "  Les pretendants selectionnes sont les suivants : "  <<  endl;

    for (int i=0 ; i<gs.getNB_JOUEURS() ; i++)
    {
        cout <<  gs.getPretendant(i).getnamePret() << ",  ";
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout << endl;
    cout  <<  "  Les lieux tires au sort sont les suivants : "  <<  endl;
    cout<<endl;

    for (int j=0;j<24;j++)
    {
        if (gs.getLieu(j).getState()) cout <<  gs.getLieu(j).getnameLieu() << ",  ";
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout  <<  "La pioche des events : " << endl;
    cout<<endl;
    for (int k=0; k<22; k++) cout << gs.getnameEvenementInPioche(k)<<endl;

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<< "La pioche de sujets : " << endl;
    cout<<endl;
    for (int i=0;   i < 100-gs.getNB_JOUEURS() ;  i++) cout<<gs.getnameSujetInPioche(i)<<endl;
    cout<<endl;


    for (int i = 0; i< gs.getNB_JOUEURS() ; i++)
    {
        cout<<endl;
        gs.getPretendant(i).printinfo();
        cout<<endl;
    }

    //gs.~game_state();



    return 0;
}
