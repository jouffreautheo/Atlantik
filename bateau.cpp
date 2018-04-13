#include "bateau.h"
#include <QDebug>


Bateau::Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur) {

	idBat = unId;
	nomBat = unNom;
	longueurBat = uneLongueur;
	largeurBat = uneLargeur;
}

QString  Bateau::versChaine(){
    //qDebug("QString  Bateau::versChaine()");
    stringstream rslt;
    rslt << "Nom du bateau : " << nomBat.toStdString() << "<br /><br />" << "Longueur : " << longueurBat << " mètres" << "<br /><br />" << "Largeur : " << largeurBat << " mètres"<<"<br /><br />";
    //qDebug()<<QString(rslt.str().c_str());
    return QString(rslt.str().c_str());
}
