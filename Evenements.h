#include <string>

class Evenement
{
private:
    std::string lore;
    std::string effet;
    std::string quete1;
    std::string quete2;
    std::string quete3;
    std::string qdesti;

    int tour;

public:
    Evenement(std::string l, std::string e, std::string q1, std::string q2, std::string q3, std::string qd);//Constructeur
};
