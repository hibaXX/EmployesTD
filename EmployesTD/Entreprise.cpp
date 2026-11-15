#include "Entreprise.h"

Entreprise::Entreprise(int c)
{
	this->capacite = c;
	nbEmployes = 0;
	personnel = new Employes*[capacite];
}

void Entreprise::ajouterEmploye(Employes* e)
{
	if (nbEmployes < capacite) {
		personnel[nbEmployes] = e;
		nbEmployes++;
	}
}

double Entreprise::sommeSalaires() const
{
	double somme = 0;
	for (int i = 0;i < nbEmployes;i++) {
		somme += personnel[i]->calculersalaire();
	}
	return somme;
}

void Entreprise::afficher() const
{
		for (int i = 0; i < nbEmployes; i++)
		{
			personnel[i]->afficher();
		}
	}

Entreprise::~Entreprise()
{
	delete[]personnel;
}
