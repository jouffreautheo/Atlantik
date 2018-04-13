#ifndef JEUENREGISTREMENT
	#define JEUENREGISTREMENT

#include <iostream>
#include <QVariant>
#include <QSqlQuery>
#include <QString>

class JeuEnregistrement {

private :

    QSqlQuery maRequete;

public :

    JeuEnregistrement(QString chaineSQL);// Constructeur de la classe. Positionne le curseur sur le premier enregistrement.

    bool suivant();// Avance le curseur sur l’enregistrement suivant.


    QVariant getValeur(QString nomChamp);// Renvoie la valeur du champ nomChamp de l’enregistrement courant. Variant est un type
									// générique pouvant contenir tout type de valeur. On peut utiliser l’opérateur "+" pour
									// concaténer des valeurs ou variables de type Chaîne ou Variant.

	void fermer();// Ferme le curseur et libère les ressources.
};

#endif
