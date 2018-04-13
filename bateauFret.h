#ifndef BATEAUFRET
	#define BATEAUFRET

#include <iostream>
#include "bateau.h"

using namespace std;

class BateauFret : public Bateau 
{

private : 

	float poidmaxBatFret;	

public :

    BateauFret(QString unId, QString unNom, float uneLongueur, float uneLargeur, float poidmax); // Constructeur de la classe.

};

#endif
