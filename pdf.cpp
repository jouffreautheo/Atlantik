#include "pdf.h"
#include "QDebug"
#include <QPageSize>

Pdf::Pdf (QObject *parent = 0,QString monDocument = "Bateau.pdf")
    :QTextDocument(parent)
{
   myFile = monDocument;

    myText = "<!DOCTYPE>"
            "<html lg=fr>"
            "<head>"
           "<meta charset=\"utf8\">"
            "</head>"
               "<body>";

}

void Pdf::ecrireTexte(QString leTexte){
    //qDebug("void Pdf::ecrireTexte(QString leTexte)");
    myText +="<p>" + leTexte + "</p>" ;
    myText +="<br /><hr /><br />";
}

void Pdf::chargerImage(QString chemin){
   //qDebug("void Pdf::chargerImage(QString chemin)");
    myText+="<div align=\"center\"><img src=" + chemin + "/></div>";
    myText+="<br /><br />";
}

void Pdf::imprimer(){
    //qDebug("void Pdf::fermer()");

    myText+="</body>"
              "</html>";

    //qDebug()<<myText;
    setHtml(myText);
    //qDebug("setHtml(myText);");

    monPDF = new QPdfWriter(myFile);
    //qDebug("QPdfWriter * monPDF = new QPdfWriter(myFile);");



    monPDF->setTitle("Liste Des Bateaux 2018");
    //qDebug("monPDF->setTitle(Liste Des Bateaux 2018);");

    monPDF->A4;
    //qDebug("l.49 pdf.cpp");

    //printer.begin(monPDF);
    print(monPDF);
    //qDebug("fin pdf.cpp");

}
