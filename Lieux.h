class Lieu
{
private:
    std::string nlieu;
    std::string desc;
    bool etat;//lieu en jeu ou non(0/1)
    int njoueurs;

public:

    Lieu(std::string nl, std::string d);

    std::string getnameLieu();

    bool getState();

    void changeState();

};
