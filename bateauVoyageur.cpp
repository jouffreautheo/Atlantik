#include "bateauVoyageur.h"
#include <QTextStream>
#include <QDebug>

BateauVoyageur::BateauVoyageur (QString unId, QString unNom, float uneLongueur, float uneLargeur, float uneVitesse, QString uneImage, CollEquipement uneCollEquip)
    :Bateau (unId,unNom,uneLongueur,uneLargeur)
{


	vitesseBatVoy = uneVitesse;
	imageBatVoy = uneImage;
	lesEquipements = uneCollEquip;
}

QString BateauVoyageur::versChaine(){
    //qDebug("QString BateauVoyageur::versChaine()");
    stringstream rslt;
    rslt << Bateau::versChaine().toStdString();
    rslt << "Vitesse : " << vitesseBatVoy << " nœuds" << "<br /><br />";
    rslt << "Liste des équipements du bateau : " << "<ul>";
    //qDebug()<<QString(rslt.str().c_str());
    //qDebug()<<lesEquipements.cardinal();
    for (int nbEquipement = 1; nbEquipement<lesEquipements.cardinal(); nbEquipement++)
	{
        rslt << "	<li> " << lesEquipements.obtenirObjet(nbEquipement).versChaine().toStdString() << "</li><br>";
        //qDebug("ok");
	}
    rslt << "</ul>";
    //qDebug()<<QString(rslt.str().c_str());
    return QString(rslt.str().c_str());
}

QString BateauVoyageur::getImageBatVoy(){

	return imageBatVoy;
}
