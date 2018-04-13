#include "collBatVoyageur.h"
#include <QDebug>

int CollBateauVoyageur::cardinal() {

	return vectBatVoyageur.size();
}

BateauVoyageur CollBateauVoyageur::obtenirObjet(int index) {
    //œqDebug("BateauVoyageur CollBateauVoyageur::obtenirObjet(int index)");

    return vectBatVoyageur[index];
}

void CollBateauVoyageur::ajouter(BateauVoyageur unBatVoyageur) {
    //qDebug("CollBateauVoyageur::ajouter(BateauVoyageur unBatVoyageur)");

	vectBatVoyageur.push_back(unBatVoyageur);
}
