#pragma once
#include<iostream>
using namespace std;
class Employes
{
private:
	string nom;
	const int matricule;
	double indice;
	static float valeur;//commune entre tous les employes
	static int compt;//Pour générer un matr unique à chaque création d'employé
public:
	Employes(string,double);
	virtual double calculersalaire()const;//on a pls mtd qui rassemble
	virtual void afficher()const;
	~Employes();
};

