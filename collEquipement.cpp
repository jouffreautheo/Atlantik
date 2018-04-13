#include "collEquipement.h"
#include <QDebug>

int CollEquipement::cardinal() {

	return vectEquipement.size();
}

Equipement CollEquipement::obtenirObjet(int index) {
    //qDebug("Equipement CollEquipement::obtenirObjet(int index)");
	return vectEquipement[index-1];
}

void CollEquipement::ajouter(Equipement unObjet) {
    //qDebug("void CollEquipement::ajouter(Equipement unObjet)");
	vectEquipement.push_back(unObjet);
}
