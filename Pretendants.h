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
        int actif2;
        string actif2_desc;

        bool passif1;
        bool passif2;
        string passif1_desc;
        string passif2_desc;

        int argent;
        int honneur;
        int PE;

   public:
        Pretendant();//Constructeur

        void printinfo();//affiche les infos du pretendant

        Sujet getSujet(int numero);//accesseur pour un sujet particulier

        string getnamePret();//accesseur nom

        void modifGold(int gain);//permet de modifier l'argent du pretendant au cours de la partie

        void modifHonneur(int gain);//permet de modifier l'honneur du pretendant au cours de la partie

        void modifPE(int gain);//permetd de modifier les PE du pretendant au cours de la partie

        void creerPret(string nom); //initialise le pretendanr au début de la partie
};































