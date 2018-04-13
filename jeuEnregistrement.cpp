#include "jeuEnregistrement.h"

JeuEnregistrement::JeuEnregistrement(QString chaineSQL) {

    maRequete.exec(chaineSQL);
}

bool JeuEnregistrement::suivant() {

    return maRequete.next();
}



QVariant JeuEnregistrement::getValeur(QString nomChamp){

    return maRequete.value(nomChamp);
}

void JeuEnregistrement::fermer() {

    maRequete.finish();
} 
