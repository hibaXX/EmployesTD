#include "Commercial.h"

double	Commercial::taux = 0.05;
Commercial::Commercial(string n, int i, double v):Employes(n,i)
{
	this->ventes = v;
}

void Commercial::modifierVentes(double v)
{
	this->ventes = v;
}

double Commercial::calculersalaire() const
{
	return Employes::calculersalaire() + ventes * taux;
}

void Commercial::afficher() const
{
	Employes::afficher();

	cout << "Ventes : " << ventes << endl;
	cout << "Salaire commercial : "
		<< calculersalaire() << endl;
}
