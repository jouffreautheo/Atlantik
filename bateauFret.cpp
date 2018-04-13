#include "bateauFret.h"

BateauFret::BateauFret(QString unId, QString unNom, float uneLongueur, float uneLargeur, float poidmax)
    :Bateau (unId,unNom,uneLongueur,uneLargeur)
{
	poidmaxBatFret = poidmax;
}
