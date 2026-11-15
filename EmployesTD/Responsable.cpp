#include "Responsable.h"

Responsable::Responsable(string n, double s, int nbrs):Employes(n,s)
{
	this -> numrsub = nbrs;
	this->sub = new Employes * [this->numrsub];
	for (int i = 0;i < numrsub;i++) {
		this->sub[i] = nullptr;
	}
}

void Responsable::afficher() const
{
	this->Employes::afficher();//appel la fct mere(afficher employe)
	for (int i = 0;i < nbr;i++) {
		this->sub[i]->afficher();
	}
}

void Responsable::ajouteremploye(Employes* E)
{
	if (numrsub > nbr && E!=nullptr) {
		this->sub[nbr] = E;
		nbr++;
	}
}

Responsable::~Responsable()
{
	delete[]sub;//libere seulement tableau pointeur pas employe
}
