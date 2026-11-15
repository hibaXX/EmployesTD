#pragma once
#include "Employes.h"
class Entreprise
{
    private:
        Employes** personnel;
        int nbEmployes;
        int capacite;

    public:
        Entreprise(int);
        void ajouterEmploye(Employes*);
        double sommeSalaires() const;
        void afficher()const;
        ~Entreprise();
};

