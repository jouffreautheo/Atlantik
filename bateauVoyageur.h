#ifndef BATEAUVOYAGEUR
	#define BATEAUVOYAGEUR

#include <iostream>
#include <QString>
#include "bateau.h"
#include "collEquipement.h"
#include "equipement.h"

using namespace std;

class BateauVoyageur : public Bateau {

private :

	float vitesseBatVoy;// Indique la vitesse moyenne en noeuds du bateau.

    QString imageBatVoy; // Contient le chemin d'accès vers le fichier représentant l'image du bateau.
						// Exemple : /images/bateauvoyageur/luceisle.jpg

	CollEquipement lesEquipements;// Indique tous les équipements présents sur le bateau.

public :
    BateauVoyageur (QString unId, QString unNom, float uneLongueur, float uneLargeur, float uneVitesse, QString uneImage, CollEquipement uneCollEquip); // Constructeur

    QString versChaine(); // Retourne sous la forme d'une chaîne toutes les valeurs concaténées des attributs de la
					 // classe, sauf l'attribut imageBatVoy qui n'est pas inséré dans la chaîne concaténée.
					 // Chaque valeur est précédée de son libellé.
					 // Exemple :
					 //Nom du bateau : Luce isle
					 //Longueur : 37,20 mètres
					 //Largeur : 8,60 mètres
					 //Vitesse : 26 noeuds
					 //Liste des équipements du bateau :
					 //- Accès Handicapé
					 //- Bar
					 //- Pont Promenade
					 //- Salon Vidéo
					 // On utilisera l’opérateur "+" pour concaténer des valeurs de type Chaîne et

    QString getImageBatVoy(); // Retourne l’attribut privé imageBatVoy.

};

#endif
