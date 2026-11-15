#pragma once
#include "Employes.h"
class Commercial :public Employes
{
	double ventes;
    static double taux;
public:
    Commercial(string, int, double);

    void modifierVentes(double);

    double calculersalaire() const override;

    void afficher() const override;
};

