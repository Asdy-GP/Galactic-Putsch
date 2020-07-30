#include "Sujets.h"
#include "Lieux.h"
#include <vector>


class Pretendant
{
   private:
        std::string name;

        int nb_sujets;
        std::vector<Sujet> sujets;

        Lieu location = Lieu("Capitale","");

        int actif;
        std::string actif_desc;
        int actif2;
        std::string actif2_desc;

        bool passif1;
        bool passif2;
        std::string passif1_desc;
        std::string passif2_desc;

        int argent;
        int honneur;
        int PE;

   public:
        Pretendant();//Constructeur

        ~Pretendant();//Destructeur

        void printinfo();//affiche les infos du pretendant

        Sujet getSujet(int numero);//accesseur pour un sujet particulier

        std::string getnamePret();//accesseur nom

        void modifGold(int gain);//permet de modifier l'argent du pretendant au cours de la partie

        void modifHonneur(int gain);//permet de modifier l'honneur du pretendant au cours de la partie

        void modifPE(int gain);//permetd de modifier les PE du pretendant au cours de la partie

        void creerPret(std::string nom); //initialise le pretendanr au début de la partie
};































