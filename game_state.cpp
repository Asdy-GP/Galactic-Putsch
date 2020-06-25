#include <iostream>
#include "game_state.h"


game_state::game_state()
	{
		nb_joueurs = 0;
		empereur = false;
		emp_tours = 25;
		string		init_lieux[23][2] = {
			{
				"Centre de formation de l'Elite Imperiale",
			"Vous pouvez recruter un ‘Soldat Oseph’ pour 5 or."
			},
			{
				"Ambassade",
			"Tant que votre pion voyage est dans l’Ambassade, votre prétendant et ses sujets \
			ne peuvent pas être ciblés par vos adversaires. Vous ne pouvez pas effectuer \
			d’action principale. Lorsqu’un prétendant adverse effectue l’action ‘Voyager’ \
			sur l'Ambassade alors que vous vous y trouvez, vous êtes dans l’obligation d’effectuer \
			l’action ‘Voyager’ sur un autre lieu a votre prochaine phase d’action principale."
			},
			{
				"Casino Prive Dhinaar",
			"Mode pari : disponible uniquement lorsque l’événement gsop est activé.  \
			Décidez d’une mise d’or de votre choix, puis tirez deux cartes au hasard dans \
			le deck de sujets principal. Le croupier en tire également deux. \
			Comparez vos combinaisons de points de priorité (une priorité de 10 bat une priorité de 5 ; une paire de 2 bat un 10 et un 5 dépareillés). \
			Si vous êtes vainqueur, remportez le double de votre mise. Sinon, vous perdez le montant misé.\
			 En cas d’égalité, vous ne perdez ni ne gagnez d’or.   \
			 Mode normal :  Lancez un dé 6. Entre 1 et 3, perdez le résultat du dé en or, \
			 entre 4 et 6, gagnez le à la place."
			},
			{
				"Le Grand Tribunal Galactique Tres Tres Juste",
			"Vous pouvez si vous le souhaitez payer 10 or. \
			Si vous faites ainsi, le prétendant de votre choix doit effectuer une action ‘Voyager’ \
			sur le Grand Tribunal à la prochaine phase d’action principale.  \
			Si ce dernier n’effectue pas cette action, il perd alors 20 honneur.  "
			},
			{
				"Petit bar sympa",
			"Vous pouvez payer 10 or. Si vous faites ainsi, mettez \
			la carte du dessus du deck evenement en dessous de celui-ci. \
			Passez ensuite votre prochaine phase d’actions principales \
			(tout effet devant se déclencher lors de cette phase est alors ignoré). "
			},
			{
				"Vallee mystérieuse",
			"Lancez un dé 20. Entre 11 et 20, gagnez 4 or et 2 honneur."
			},
			{
				"Jungle de Casanooba",
			"Lancez un dé 20 et partez en expédition. \
			Entre 1 et 10, vous faites une incroyable découverte ; \
			gagnez 10 or et 5 honneur. \
			Entre 11 et 20 vous vous égarez, \
			et vous perdez votre action principale lors de la \
			prochaine phase d’action principale"
			},
			{
				"Fer des damnes",
			"Vous pouvez cibler jusqu'à deux sujets du carrousel qui iront en prison sur ce lieu. \
			Ajoutez les au prochain carrousel (Ils prennent un espace de carrousel).  \
			Ces sujets ne peuvent pas à nouveau être ciblés par ce même effet tant qu’ils sont en jeu."
			},
			{
				"Marche de Bagoudadi",
			"Tirez un sujet du deck principal.  \
			Vous pouvez le recruter pour son prix de base.  \
			Si vous ne faites pas ainsi, mettez le dans la réserve. \
			Vous pouvez à la place recruter les sujets vendus au marché noir \
			pour leur prix de base"
			},
			{
				"Station de carburant de poussiere d etoiles",
			"Gagnez 5 or et perdez 3 honneur"
			},
			{
				"Ecole du Flux",
			"Vous pouvez payez 5 or. \
			 Si vous faites ainsi, allez chercher l’un des sujets suivants dans \
			 le deck principal ou la réserve et retirez le de la partie. \
			 Ajoutez le au prochain carrousel. \
			• Zucc  • Asdy • Juve • Emy • Dernière Inventeuse Lombyx"
			},
			{
				"GSCorp",
				"Vous pouvez payer 25 or. \
				Si vous faites ainsi, allez chercher une carte du deck evenement et mettez la au dessus de celui-ci."
			},
			{
				"Holoplanet",
				"Vous pouvez payer 15 or.  Si vous faites ainsi, l’Holoplanet devient une copie du lieu ciblé. \
				La copie possède en plus de ses propres capacités l’effet de l’Holoplanet."
			},
			{
				"L'Auguste, Ville Baleine",
				"Vous pouvez payer 5 or. \
				Si vous faites ainsi, à la prochaine phase d’actions secondaires, \
				posez l’une de vos actions en même temps que celles de vos adversaires et regardez l’action secondaire face cachée ciblée. \
				Posez ensuite le reste de vos actions secondaires."
			},
			{
				"Douane interplanetaire",
				"Marquez le lieu ciblé. Lorsqu’un prétendant adverse effectue une action ‘Voyager’ sur le lieu marqué, gagnez 5 or. \
				Si une marque est déjà en jeu, effacez la et marquez un autre lieu."
			},
			{
				"Open Senat",
				"Gagnez 3 honneur. \
				Si vous avez 100 honneur,vous pouvez au lieu de cela défausser l'événement actif. \
				Les récompenses d'événement ne sont pas attribuées. \
				Allez chercher l'événement ‘Ordre 99’ dans le deck evenement ou la défausse et mettez le en jeu. \
				Cet effet ne peut être activé qu’une fois par partie."
			},
			{
				"Hyper Cafe a chat",
				"Si vous décidez de voyager sur l’Hyper Café, vous devez dire distinctement ‘Miaou’ exactement au moment de la révélation des actions principales pour pouvoir y aller. \
				Si vous avez dit ‘Miaou’ vous ne pouvez plus voyager autre part que vers le Café. \
				Votre prochain recrutement au carrousel ce tour ci coûte 10 or de moins \
				(le prix ne peut descendre en dessous de 0). \
				Si des prétendants voyagent vers l’Hyper Café à chats durant la même phase d’actions principales \
				ils perdent 20 honneur (vous ne pouvez descendre en dessous de 0)."
			},
			{
				"Ghetto 51",
				"Offrez votre protection aux petits habitants du Ghetto et gagnez 2 or et 2 honneur."
			},
			{
				"Blue Ganash Planetation",
				"Gagnez 3 or"
			},
			{
				"Marche noir de Bagoudadi",
				"Vous pouvez vendre un sujet pour son prix de renforcement (Vous ne gagnez ainsi que de l’or). \
				Si vous faites ainsi, mettez le sujet vendu sur le ‘Marché de Bagoudadi'."
			},
			{
				"Arene de l honneur veritable",
				"Le sujet de type officier ou mercenaire ciblé que vous contrôlez ne peut plus être utilisé en \
				tant qu’action secondaire jusqu'à la prochaine phase d’actions principales. \
				Gagnez 5 honneur"
			},
			{
				"Orphelinat de la plenitude",
				"Gagnez 3 honneur."
			},
			{
				"Nirva Nite Club",
				"Lancez un dé 20 et appliquez l’un des effets suivants selon votre résultat: \
				- Entre 1 et 5, envoyez l’un de vos sujets dans la réserve \
				- Entre 6 et 10, vous passez simplement une bonne soirée, il ne se passe rien. \
				- Entre 11 et 15, ajoutez un sujet de la réserve au hasard au prochain carrousel. \
				- Entre 16 et 19, ajoutez un sujet de la défausse de votre choix au prochain carrousel. \
				- Si vous faites 20, ajoutez immédiatement le Psytrance Pope à votre faction où qu’il se trouve dans la partie, \
				et même hors du jeu, sans tenir compte du coût."
			}
		};
		lieux.push_back(Lieu("Capitale", "Gagnez x or ou effectuez un coup d'Etat"));
		lieux[0].changeState();
		int i = 0;
		while (i < 23)
		{
			lieux.push_back(Lieu(init_lieux[i][0], init_lieux[i][1]));
			i++;
		}
		srand(time(NULL));
		int rng;
		i = 1;
		while (i < 10)
		{
			rng = rand() % 24;
			if (lieux[rng].getState() == false)
			{
				lieux[rng].changeState();
				i++;
			}
		}
	}

	game_state::~game_state()
	{
	}

	void	game_state::setEmpereur(bool new_emp)
	{
		this->empereur = new_emp;
	}

	bool	game_state::getEmpereur()
	{
		return (this->empereur);
	}

	void	game_state::addPretendant(string nom)
	{
		Pretendant p=Pretendant();
		p.creerPret(nom);
		this->pretendants.push_back(p);
		this->nb_joueurs=nb_joueurs+1;
	}

	Pretendant	game_state::getPretendant(int i)
	{
        if (i < nb_joueurs)
        {
            return (pretendants[i]);
        }
		else return (pretendants[nb_joueurs]);
	}

	Lieu	game_state::getLieu(int nb_lieu)
	{
		if (nb_lieu < 25) return (lieux[nb_lieu]);
		return lieux[0];
	}

	int game_state::getNB_JOUEURS()
	{
	    return this -> nb_joueurs;
	}

    vector<Pretendant> game_state::getVectPret()
    {
        return pretendants;
    }
