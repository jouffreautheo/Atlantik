#ifndef BATEAU
	#define BATEAU

#include <iostream>
#include <QString>
#include <sstream>

using namespace std;

class Bateau {

private : 

    QString idBat;
    QString nomBat;
	float longueurBat;	
	float largeurBat;

public :

    Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur); // Constructeur de la classe.
	
    QString versChaine();// Retourne sous la forme d'une chaîne de caractères toutes les valeurs concaténées
						// des attributs de la classe précédées de leurs libellés.
						// Exemple :
							//Nom du bateau : Luce isle
							//Longueur : 37,20 mètres
							//Largeur : 8,60 mètres
};

#endif
