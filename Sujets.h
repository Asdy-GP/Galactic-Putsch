#include <string>

class Sujet
{
    private:
        std::string name;

        std::string type1;
        std::string type2;
        std::string type3;

        int level;

        std::string desc_niv1;
        std::string desc_niv2;
        std::string desc_niv3;

        int niv_or1;
        int niv_or2;
        int niv_or3;

        int niv_hon1;
        int niv_hon2;
        int niv_hon3;

        int prio;

    public:
        //constructeur
        Sujet(std::string n,std::string t1,std::string t2,std::string t3, int l, std::string d1, std::string d2, std::string d3, int no1, int no2, int no3, int nh1, int nh2, int nh3, int prio);

        std::string getnameSujet();//accesseur nom

        std::string gettypeSujet(int i);//accesseur type
};
