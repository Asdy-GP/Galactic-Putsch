# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
#include "fonctions_utiles.h"



class game_state
{

private:

	int				nb_joueurs;
	bool			empereur;
	int				emp_tours;
	std::vector<Pretendant> pretendants;
	std::vector<Lieu>	lieux;
	std::vector<Sujet>  pioche_sujet;
	std::vector<Evenement> pioche_events;
public:

	game_state();//constructeur

	~game_state();//destructeur

	void	setEmpereur(bool new_emp);//activer/desac mode empereur

	bool	getEmpereur();//accesseur empereur

	Pretendant	getPretendant(int i);//accesseur pretendant

	Lieu	getLieu(int nb_lieu);//accesseur lieu

	int getNB_JOUEURS();//accesseur nombre de joueurs

    std::vector<Pretendant> getVectPret();//accesseur a la liste des pretendants

    std::string getnameSujetInPioche(int i);

    std::string getnameEvenementInPioche(int i);

};
