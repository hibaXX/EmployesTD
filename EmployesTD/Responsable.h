#pragma once
#include "Employes.h"
class Responsable : public Employes
{
	Employes** sub;
	int numrsub;//capacite max  du tableau
	int nbr;//nbr qui se trouve
public:
	Responsable(string, double, int);
	void afficher()const;
	void ajouteremploye(Employes* E);
	~Responsable();
};

