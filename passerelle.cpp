#include "passerelle.h"
#include <QDebug>

CollEquipement Passerelle::chargerLesEquipements(QString unIdBateau) {



    CollEquipement lesEquipements;

        QString requete;
        requete = "SELECT Equipement.idEquip, libelleEquip FROM Equipement INNER JOIN equiper ON Equipement.idEquip = equiper.idEquip WHERE numeroBateau ="+ unIdBateau +";";

        JeuEnregistrement jeuEquipement(requete);

         while(jeuEquipement.suivant())
         {
             //qDebug("while(jeuEquipement.suivant())");

             QString id = jeuEquipement.getValeur("idEquip").toString();
             QString libelle = jeuEquipement.getValeur("libelleEquip").toString();

             Equipement newEquip(id,libelle);

             lesEquipements.ajouter(newEquip);
             //qDebug("lesEquipements.ajouter(newEquip);");

         }


    return lesEquipements;
}


CollBateauVoyageur Passerelle::chargerLesBateauxVoyageurs() {



    CollBateauVoyageur lesBateaux;


        QString requete;
        requete = "SELECT idBat, nomBat, longueurBat, largeurBat, vitesseBat, imageBat, poidMaxBat, type FROM Bateau WHERE type='v';";

        JeuEnregistrement jeuBateau(requete);

        while(jeuBateau.suivant())
         {

             QString id = jeuBateau.getValeur("idBat").toString();
             QString nom = jeuBateau.getValeur("nomBat").toString();
             float longueur = jeuBateau.getValeur("longueurBat").toFloat();
             float largeur = jeuBateau.getValeur("largeurBat").toFloat();
             float vitesse = jeuBateau.getValeur("vitesseBat").toFloat();
             QString image = jeuBateau.getValeur("imageBat").toString();

             CollEquipement sesEquipements = Passerelle::chargerLesEquipements(id);

             BateauVoyageur newBateau(id,nom,longueur,largeur,vitesse,image,sesEquipements);

             lesBateaux.ajouter(newBateau);
             //qDebug("lesBateaux.ajouter(newBateau);");



         }


    return lesBateaux;
}
