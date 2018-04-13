#ifndef EQUIPEMENT
	#define EQUIPEMENT

#include <iostream>
#include <QString>
using namespace std;

class Equipement {

private :
	
    QString idEquip;
    QString libEquip;

public :

    Equipement(QString unId, QString unLib);// Constructeur de la classe.

    QString versChaine(); // Retourne sous la forme d'une chaîne la valeur de l'attribut libEquip de la classe.
							   // L'identifiant de l'équipement n'est pas inséré dans la chaîne.
};

#endif
