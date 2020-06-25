
using namespace std;

class Sujet
{
    private:
        string name;

        string type1;
        string type2;
        string type3;

        int level;

        string desc_niv1;
        string desc_niv2;
        string desc_niv3;

        int niv_or1;
        int niv_or2;
        int niv_or3;

        int niv_hon1;
        int niv_hon2;
        int niv_hon3;

        int prio;

    public:
        //constructeur
        Sujet(string n,string t1,string t2,string t3, int l, string d1, string d2, string d3, int no1, int no2, int no3, int nh1, int nh2, int nh3, int prio);

        string getnameSujet();//accesseur nom

        string gettypeSujet(int i);//accesseur type
};
