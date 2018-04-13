#ifndef COLLEQUIPEMENT
	#define COLLEQUIPEMENT

#include <iostream>
#include <vector>
#include "equipement.h"

using namespace std;

class CollEquipement {

private :
	
		vector<Equipement> vectEquipement;

public :

	int cardinal(); // Renvoie le nombre d'objets de la collection.

	Equipement obtenirObjet(int unIndex);// Retourne l'equipement d'index unIndex, le premier objet de la collection a pour index 1.

	void ajouter(Equipement unObjet);// Ajoute un objet à la collection.

};

#endif