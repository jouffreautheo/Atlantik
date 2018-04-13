#include <QGuiApplication>
#include "pdf.h"
#include "passerelle.h"
#include <QDebug>


int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("passf203");
    db.setDatabaseName("atlantik");
    db.open();

    Pdf lePDF(0,"bateaux.pdf");

    CollBateauVoyageur lesBateaux;

    lesBateaux = Passerelle::chargerLesBateauxVoyageurs();

    //qDebug("Nombre de bateau récupéré par la requête :");
    //qDebug()<< lesBateaux.cardinal();

    for (int noBat=0; lesBateaux.cardinal()>noBat; noBat++)
    {
       // qDebug("dans la boucle for du main");
        BateauVoyageur unBateau(lesBateaux.obtenirObjet(noBat));
        //qDebug("-etape 1");
        lePDF.chargerImage(unBateau.getImageBatVoy());
        //qDebug("-etape 2");
        lePDF.ecrireTexte(unBateau.versChaine());
        //qDebug("-etape 3");
    }

    lePDF.imprimer();
    //qDebug("lePDF.fermer()");

    return a.exec();
}
