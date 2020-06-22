using namespace std;

class Lieu
{
private:
    string nlieu;
    string desc;
    bool etat;//lieu en jeu ou non(0/1)
    int njoueurs;

public:
    Lieu(string nl, string d)
    {
        etat = false;
        nlieu = nl;
        desc = d;
    }

    string getnameLieu()
    {
        return nlieu;
    }

    void changeState()
    {
        if (etat == true) etat = false;
        else etat = true;
    }

























};



