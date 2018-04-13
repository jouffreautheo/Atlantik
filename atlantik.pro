#-------------------------------------------------
#
# Project created by QtCreator 2018-03-12T15:07:03
#
#-------------------------------------------------

QT       += core sql

QT       += gui

TARGET = atlantik
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += bateau.h bateauFret.h  bateauVoyageur.h collBatVoyageur.h collEquipement.h equipement.h jeuEnregistrement.h passerelle.h \ 
    pdf.h
SOURCES += main.cpp bateau.cpp bateauFret.cpp bateauVoyageur.cpp collBatVoyageur.cpp collEquipement.cpp equipement.cpp jeuEnregistrement.cpp passerelle.cpp \
    pdf.cpp
