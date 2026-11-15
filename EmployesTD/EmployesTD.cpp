// EmployesTD.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Employes.h"
#include"Responsable.h"
#include"Commercial.h"
#include"Entreprise.h"

int main()
{
	Employes* E1=new Employes("Hiba", 20000);
	Employes* E2=new Employes("Yassmine", 10000);

	E1->calculersalaire();
	E1->afficher();
	cout << "***************************************" << endl;
	E2->calculersalaire();
	E2->afficher();
	cout << "***************************************" << endl;
	Responsable* R1 = new Responsable("wafaa", 3000, 4);
	R1->ajouteremploye(E1);
	R1->ajouteremploye(E2);
	R1->afficher();
	cout << "***************************************" << endl;
	Responsable* R2 = new Responsable("sara", 3000, 4);
	R2->ajouteremploye(E1);
	R2->afficher();
	cout << "***************************************" << endl;
	Commercial* C1 = new Commercial("Hiba", 3, 3000);
	C1->afficher();
	cout << "***************************************" << endl;
	C1->modifierVentes(4000);
	C1->calculersalaire();
	C1->afficher();
	cout << "***************************************" << endl;

	Entreprise *e1 = new Entreprise(2);
	e1->ajouterEmploye(E1);
	e1->afficher();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
