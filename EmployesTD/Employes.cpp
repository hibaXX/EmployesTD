#include "Employes.h"

float Employes::valeur = 0;
int Employes::compt = 0;

Employes::Employes(string nom, double indice):matricule(+compt)
{
	this->nom = nom;
	this->indice = indice;
}

double Employes::calculersalaire() const
{
	return indice + (indice* valeur);
	//cout << " donner la valeur d augmentation " << endl;
	//cin >> Employe::valeurAug;
	//return this->indiceSal + ((this->indiceSal + Employe::valeurAug) / 100);
}

void Employes::afficher() const
{
	cout << "le nom : " << nom << endl;
	cout << "Matricule : " << matricule << endl;
	cout << "Indice : " << indice << endl;
	cout << "salaire : " << calculersalaire() << endl;
}

Employes::~Employes()
{
}
