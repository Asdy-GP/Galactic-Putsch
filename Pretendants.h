#include "Sujets.h"
#include "Lieux.h"
#include <vector>
using namespace std;

class Pretendant
{
   private:
        string name;

        int nb_sujets;
        vector<Sujet> sujets{};

        Lieu location=Lieu("","");

        int actif;
        string actif_desc;

        bool passif1;
        bool passif2;
        string passif1_desc;
        string passif2_desc;

        int argent;
        int honneur;
        int PE;

   public:
        Pretendant()
        {
            name = "Osef";

            nb_sujets = 1;
            sujets.assign(nb_sujets,Sujet("Dummy","","","",0,"","","",0,0,0,0,0,0,0));

            location = Lieu("Capitale","Gagnez x or ou effectuez un coup d'Etat");
            location.changeState();

            actif = 0;
            actif_desc = "";

            passif1 = false;
            passif2 = false;
            passif1_desc = "";
            passif2_desc = "";

            argent = 0;
            honneur = 0;
            PE = 0;
        }


        void printinfo()
        {
            cout<<  name  <<  " possede "  <<  argent  <<  " or,"  <<  honneur  <<  " honneur et "  <<  PE  <<  " points d'eclat"  <<endl;
            cout<<  "Actif ("  <<  actif  <<  " charges restantes) : "  <<  actif_desc  <<endl;
            cout<<  "Passif 1:"  <<  passif1_desc  <<endl;
            cout<<  "Passif 2:"  <<  passif2_desc  <<  endl;
            cout<<  "Sa faction comporte les sujets suivants: "  <<endl;
            for(int i=0; i<nb_sujets;i++) cout<<  sujets[i].getnameSujet()  <<endl;
            cout<<  "Il est actuellement sur "  <<  location.getnameLieu()  <<endl;
        }

        Sujet getSujet(int numero){
            if (numero<nb_sujets) return sujets[numero];
            else return sujets[nb_sujets];
        }

        string getnamePret(){
            return name;
        }

        void modifGold(int gain)
        {
            argent = argent + gain;
            if (argent < 0) argent = 0;
        }

        void modifHonneur(int gain)
        {
            honneur = honneur + gain;
            if (honneur < 0) honneur = 0;
        }

        void modifPE(int gain)
        {
            PE = PE + gain;
            if (PE < 0) PE = 0;
        }

        void creerPret(string nom)
        {
            if (nom == "Le Kahn")
            {
                name = "Le Kahn";
                sujets[0] = Sujet("General Tarrok","Officier","","",1,"","","",15,30,60,10,10,0,8);
                nb_sujets = 1;
                actif = 1;
                actif_desc = "Detruisez un lieu sauf la Capitale";
                passif1_desc = "Exclusivite sur le lieu que vous occupez, sauf la Capitale";
                argent = 15;
                honneur = 15;
            }
            if (nom == "Prince Gorio")
            {
                name = "Prince Gorio";
                sujets[0] = Sujet("Nuggi","Familier","","",1,"","","",10,10,20,5,5,5,1);
                nb_sujets = 1;
                actif = 3;
                actif_desc = "Le niveau du sujet ciblé ne peut pas monter ou descendre durant les trois prochains tours.";
                passif1=true;
                passif1_desc = " L’honneur requis pour effectuer une action est diminué de cinq (s’applique à vous seulement)";
                argent = 15;
                honneur = 20;
            }
        }
};































