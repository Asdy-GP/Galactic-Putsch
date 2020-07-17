# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
#include "fonctions_utiles.h"
#include "Evenements.h"


class game_state
{

private:

	std::string				nb_joueurs;
	bool			empereur;
	int				emp_tours;
	std::vector<Pretendant> pretendants;
	std::vector<Lieu>	lieux;
	std::vector<Sujet>  pioche_sujet;

public:

	game_state();//constructeur

	~game_state();//destructeur

	void	setEmpereur(bool new_emp);//activer/desac mode empereur

	bool	getEmpereur();//accesseur empereur

	void	addPretendant(std::string nom);//rajoute un pretendant a la liste de jeu

	Pretendant	getPretendant(int i);//accesseur pretendant

	Lieu	getLieu(int nb_lieu);//accesseur lieu

	std::string getNB_JOUEURS();//accesseur nombre de joueurs

    std::vector<Pretendant> getVectPret();//accesseur a la liste des pretendants

    std::string getnameSujetInPioche(int i);

};
