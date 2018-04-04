#ifndef SOMMET_H
#define SOMMET_H


class Sommet
{
    public:
        Sommet();
        virtual ~Sommet();
        void modulation_population (int population_t , std::vector<int>m_idxarete_proie , std::vector<int> m_idxarete_predateur , Sommet predateur ) // à compléter quand on aura les aretes
        void exctinction;

    protected:

    private:
        std::string nom;
        int index;
        std::string type;
        int population_t;
        int population_tpost;
        Sommet predateur;
        std::vector<int> m_idxarete_proie;
        std::vector<int> m_idxarete_predateur;


};

#endif // SOMMET_H
