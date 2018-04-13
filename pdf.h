#ifndef PDF
    #define PDF

#include <iostream>
#include <QString>
#include <QSqlQuery>
#include <QTextDocument>
#include <QPdfWriter>
#include "bateauVoyageur.h"

using namespace std;

class Pdf:public QTextDocument{
private:

    QString myFile;
    QString myText;
    QPdfWriter * monPDF;

    public:

        Pdf (QObject *parent, QString monDocument);

        void ecrireTexte(QString leTexte);

        void chargerImage(QString chemin);

        void imprimer();
    };
#endif
