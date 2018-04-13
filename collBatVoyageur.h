#ifndef COLLBATEAUVOYAGEUR
	#define COLLBATEAUVOYAGEUR

#include <iostream>
#include <vector>
#include "bateauVoyageur.h"

using namespace std;

class CollBateauVoyageur {
	
private :

	vector<BateauVoyageur> vectBatVoyageur;

public :
	
	int cardinal(); // Renvoie le nombre d'objets de la collection.

	BateauVoyageur obtenirObjet(int unIndex);// Retourne le bateauVoyageur d'index unIndex, le premier objet de la collection a pour index 1.

	void ajouter(BateauVoyageur unBatVoyageur);// Ajoute un objet à la collection.
	

};

#endif