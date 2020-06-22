#include <iostream>
#include "Pretendants.h"

using namespace std;

Pretendant::Pretendant()
{
    name = "Osef";

    nb_sujets = 1;
    sujets.assign(nb_sujets,Sujet("Dummy","","","",0,"","","",0,0,0,0,0,0,0));

    location = Lieu("Capitale","Gagnez x or ou effectuez un coup d'Etat");
    location.changeState();

    actif = 0;
    actif_desc = "";
    actif2 = 0;
    actif2_desc = "";

    passif1 = false;
    passif2 = false;
    passif1_desc = "";
    passif2_desc = "";

    argent = 0;
    honneur = 0;
    PE = 0;
}


void Pretendant::printinfo()
{
    cout<<  name  <<  " possede "  <<  argent  <<  " or,"  <<  honneur  <<  " honneur et "  <<  PE  <<  " points d'eclat"  <<endl;
    cout<<  "Actif 1("  <<  actif  <<  " charges restantes) : "  <<  actif_desc  <<endl;
    cout<<  "Actif 2("  <<  actif2  <<  " charges restantes) : "  <<  actif2_desc  <<endl;
    cout<<  "Passif 1:"  <<  passif1_desc  <<endl;
    cout<<  "Passif 2:"  <<  passif2_desc  <<  endl;
    cout<<  "Sa faction comporte les sujets suivants: "  <<endl;
    for(int i=0; i<nb_sujets;i++) cout<<  sujets[i].getnameSujet()  <<endl;
    cout<< name << " est actuellement sur "  <<  location.getnameLieu()  <<endl;
}

Sujet Pretendant::getSujet(int numero){
        if (numero<nb_sujets) return sujets[numero];
        else return sujets[nb_sujets];
}

string Pretendant::getnamePret(){
            return name;
}

void Pretendant::modifGold(int gain)
{
    argent = argent + gain;
    if (argent < 0) argent = 0;
}

void Pretendant::modifHonneur(int gain)
{
    honneur = honneur + gain;
    if (honneur < 0) honneur = 0;
}

void Pretendant::modifPE(int gain)
{
    PE = PE + gain;
    if (PE < 0) PE = 0;
}

void Pretendant::creerPret(string nom)
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

    if (nom == "Kerval")
    {
        name = "Kerval";
        sujets[0] = Sujet("Mister Cline","Officier","Machine","",1,"","","",25,25,40,15,15,0,5);
        nb_sujets = 1;
        actif = -1;//il est censé pouvoir faire des tests à l'infini, si on effectue des test sur 0, ca pose pas de problemes de decrementer
        actif_desc = "Vous pouvez convertir votre honneur en or ou votre or en honneur au debut de chaque phase. Vous ne pouvez convertir que des tranches de 10 or ou 10 honneur.";
        passif1=true;
        passif1_desc = "Commencez la partie avec 5 Or en plus.";
        argent = 25;
        honneur = 15;
    }

    if (nom == "Galar")
    {
        name = "Galar";
        sujets[0] = Sujet("Grizzle","Familier","","",1,"","","",15,-1,-1,25,-1,-1,1);
        nb_sujets = 1;
        actif = 2;
        actif_desc = "Le niveau du sujet ciblé passe à 1. Cela n’est pas considéré comme une action Affaiblir.";
        passif1=true;
        passif1_desc = "Au terme d’une action ‘Voyager’ de Galar, si celui ci se trouve sur le même lieu qu’un prétendant adverse, les deux joueurs lancent un dé 20.  Le joueur obtenant le plus petit résultat verra le niveau de l’un de ses sujets baisser de 1 (Ce joueur cible lui même un sujet qu’il contrôle, il ne peut pas cibler un sujet niveau 1).";
        argent = 15;
        honneur = 10;
    }

    if (nom == "Apolion")
    {
        name = "Apolion";
        sujets[0] = Sujet("Mary Blaster","Officier","","",1,"","","",10,0,0,25,50,65,4);
        nb_sujets = 1;
        actif = 2;
        actif_desc = "Le niveau du sujet ciblé augmente de 1 (Ignorez les restrictions de passage de niveau). ";
        passif1=true;
        passif1_desc = "Apôlion ne peut pas descendre en dessous de 20 honneur.";
        argent = 10;
        honneur = 35;
    }

    if (nom == "Clara Mars")
    {
        name = "Clara Mars";
        sujets[0] = Sujet("Julien","Officier","","",1,"","","",25,30,50,25,0,35,3);
        nb_sujets = 1;
        actif = 5;
        actif_desc = "Jusqu'à la dernière phase du prochain tour, retirez de la partie le sujet du carrousel ciblé (il n’est pas considéré ‘en jeu’ et aucun joueur ne peut le cibler). Vous pouvez utiliser son action secondaire de niveau 1. A la fin du prochain tour, mettez ce sujet dans la réserve.";
        passif1=true;
        passif1_desc = "Clara Mars et ses sujets ne peuvent pas être ciblés par des joueurs adverses tant qu’elle n’a pas effectué d’action principale au tour précédent.";
        argent = 15;
        honneur = 15;
    }

    if (nom == "Mere Syndra")
    {
        name = "Mere Syndra";
        nb_sujets = 2;
        sujets[0] = Sujet("Hernst","Mercenaire","","",1,"","","",10,0,0,25,50,65,4);
        sujets.push_back(Sujet("Ghull","Familier","","",1,"","","",5,10,10,0,0,0,1));
        actif = 5;
        actif_desc = "Vous avez la priorité sur le prochain carrousel (Recrutez votre sujet en premier).";
        passif1=false;
        passif1_desc = "Vous commencez la partie avec Hernst et Ghul sous votre contrôle. ";
        argent = 20;
        honneur = 10;
    }

    if (nom == "M4RK")
    {
        name = "M4RK";
        sujets[0] = Sujet("Zucc","Officier","","",1,"","","",15,15,25,15,20,25,2);
        nb_sujets = 1;
        actif = 0;
        actif_desc = "";
        passif1 = true;
        passif1_desc = "M4RK peut à tout moment regarder le premier événement du deck evenement.";
        passif2=true;
        passif2_desc = " M4RK pose toujours ses actions principales après ses adversaires. Avant de les poser, il peut regarder l’une des actions principales face cachée d'un prétendant adverse.";
        argent = 20;
        honneur = 10;
    }

    if (nom == "Mu")
    {
        name = "Mu";
        sujets[0] = Sujet("Le Disciple","Religieux","","",1,"","","",5,0,0,25,35,35,1);
        nb_sujets = 1;
        actif = 5;
        actif_desc = " ‘Le Disciple’ monte d’un niveau (Ne tenez pas compte des restrictions de montée de niveau).";
        passif1=true;
        passif1_desc = " A chaque début de tour, regardez les 5 premiers sujets du deck principal. Vous pouvez en choisir un et le mettre en dessous du deck ou à la place mettre le sujet du dessous du deck au dessus.";
        argent = 10;
        honneur = 25;
    }

    if (nom == "Val")
    {
        name = "Val";
        sujets[0] = Sujet("Le Peuple","Plebeien","","",1,"","","",0,0,0,40,60,80,5);
        nb_sujets = 1;
        actif = 2;
        actif_desc = "Allez chercher un sujet de type plébéien dans le deck principal ou la réserve et retirez le de la partie (il n’est pas considéré en jeu). Ajoutez le au prochain carrousel. ";
        actif2 = 1;
        actif2_desc = " Recrutez gratuitement tous les sujets plébéiens au prochain carrousel. ";
        argent = 5;
        honneur = 25;
    }
}
