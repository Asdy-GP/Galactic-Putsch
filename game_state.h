# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Pretendants.h"


using namespace std;

class game_state
{

private:

	int				nb_joueurs;
	vector<Pretendant> pretendants;
	bool			empereur;
	int				emp_tours;
	vector<Lieu>	lieux;

public:

	game_state();//constructeur

	~game_state();//destructeur

	void	setEmpereur(bool new_emp);//activer/desac mode empereur

	bool	getEmpereur();//accesseur empereur

	void	addPretendant(string nom);//rajoute un pretendant a la liste de jeu

	Pretendant	getPretendant(int i);//accesseur pretendant

	Lieu	getLieu(int nb_lieu);//accesseur lieu

	int getNB_JOUEURS();//accesseur nombre de joueurs

    vector<Pretendant> getVectPret();//accesseur a la liste des pretendants

};
