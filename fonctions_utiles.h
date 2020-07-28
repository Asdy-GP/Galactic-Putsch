#include "Pretendants.h"
#include "Evenements.h"
#include <string>

bool unicSujet(Sujet s1, std::vector<Pretendant> pret, int nbj);
bool verifEvent(std::vector<Evenement> eve, int size, std::string dejavu);
bool verifSujet(std::vector<Sujet> suj, int size, std::string dejavu);
bool verifPret(std::vector<Pretendant> pret, int size, std::string dejavu);
int convert(std::string nb);
