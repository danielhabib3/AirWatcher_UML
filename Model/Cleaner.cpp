/*************************************************************************
                           Cleaner  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Cleaner> (fichier Cleaner.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Cleaner.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Cleaner::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Cleaner & Cleaner::operator = ( const Cleaner & unCleaner )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Cleaner::Cleaner ( const Cleaner & unCleaner )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Cleaner>" << endl;
#endif
} //----- Fin de Cleaner (constructeur de copie)


Cleaner::Cleaner ( string unCleanerId, double uneLatitude, double uneLongitude, string start, string stop )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Cleaner>" << endl;
#endif
    cleanerId = unCleanerId;
    latitude = uneLatitude;
    longitude = uneLongitude;

    string dayStart, dayStop, monthStart, monthStop, yearStart, yearStop, hourStart, hourStop, minStart, minStop, secStart, secStop;
    stringstream ssStart(start);
    stringstream ssStop(stop);

    getline(ssStart, yearStart, '-');
    getline(ssStart, monthStart, '-');
    getline(ssStart, dayStart, ' ');
    getline(ssStart, hourStart, ':');
    getline(ssStart, minStart, ':');
    getline(ssStart, secStart, ':');

    getline(ssStop, yearStop, '-');
    getline(ssStop, monthStop, '-');
    getline(ssStop, dayStop, ' ');
    getline(ssStop, hourStop, ':');
    getline(ssStop, minStop, ':');
    getline(ssStop, secStop, ':');

    timeStart = new tm();
    timeStop = new tm();

    timeStart->tm_sec = stoi(secStart);
    timeStart->tm_min = stoi(minStart);
    timeStart->tm_hour = stoi(hourStart);
    timeStart->tm_year = stoi(yearStart) - 1900;
    timeStart->tm_mon = stoi(monthStart) - 1;
    timeStart->tm_mday = stoi(dayStart);

    timeStop->tm_sec = stoi(secStop);
    timeStop->tm_min = stoi(minStop);
    timeStop->tm_hour = stoi(hourStop);
    timeStop->tm_year = stoi(yearStop) - 1900;
    timeStop->tm_mon = stoi(monthStop) - 1;
    timeStop->tm_mday = stoi(dayStop);
} //----- Fin de Cleaner


Cleaner::~Cleaner ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Cleaner>" << endl;
#endif
    delete timeStart;
    delete timeStop;
} //----- Fin de ~Cleaner

//-------------------------------------------- GETTERS - SETTERS
string Cleaner::getCleanerId ( ) const
// Algorithme :
//
{
    return cleanerId;
} //----- Fin de Méthode

double Cleaner::getLatitude ( ) const
// Algorithme :
//
{
    return latitude;
} //----- Fin de Méthode

double Cleaner::getLongitude ( ) const
// Algorithme :
//
{
    return longitude;
} //----- Fin de Méthode

tm* Cleaner::getTimeStart ( ) const
// Algorithme :
//
{
    return timeStart;
} //----- Fin de Méthode

tm* Cleaner::getTimeStop ( ) const
// Algorithme :
//
{
    return timeStop;
} //----- Fin de Méthode


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

