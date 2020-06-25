using namespace std;

class Lieu
{
private:
    string nlieu;
    string desc;
    bool etat;//lieu en jeu ou non(0/1)
    int njoueurs;

public:

    Lieu(string nl, string d);

    string getnameLieu();

    bool getState();

    void changeState();

};
