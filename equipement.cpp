#include "equipement.h"
#include <sstream>
#include <QDebug>

Equipement::Equipement(QString unId, QString unLib) {
	idEquip = unId;
	libEquip = unLib;
}

QString Equipement::versChaine() {
    //qDebug("QString Equipement::versChaine()");

    stringstream rslt;
    rslt << libEquip.toStdString();
    return QString(rslt.str().c_str());
}
