/*************************************************************************
                           Measurement  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Measurement> (fichier Measurement.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Measurement.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Measurement::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Measurement & Measurement::operator = ( const Measurement & unMeasurement )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Measurement::Measurement ( const Measurement & unMeasurement )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Measurement>" << endl;
#endif
} //----- Fin de Measurement (constructeur de copie)


Measurement::Measurement ( Sensor* unSensor, string unType, double uneValue, string timeString )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Measurement>" << endl;
#endif

    sensor = unSensor;
    type = unType;
    value = uneValue;

    string day, month, year, hour, min, sec;
    stringstream ss(timeString);
 
    getline(ss, year, '-');
    getline(ss, month, '-');
    getline(ss, day, ' ');
    getline(ss, hour, ':');
    getline(ss, min, ':');
    getline(ss, sec, ':');

    time = new tm();

    time->tm_sec = stoi(sec);
    time->tm_min = stoi(min);
    time->tm_hour = stoi(hour);
    time->tm_year = stoi(year) - 1900;
    time->tm_mon = stoi(month) - 1;
    time->tm_mday = stoi(day);

} //----- Fin de Measurement


Measurement::~Measurement ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Measurement>" << endl;
#endif
} //----- Fin de ~Measurement

//-------------------------------------------- GETTERS - SETTERS
Sensor* Measurement::getSensor (  ) const
// Algorithme :
//
{
    return sensor;
} //----- Fin de Méthode

string Measurement::getType (  ) const
// Algorithme :
//
{
    return type;
} //----- Fin de Méthode

double Measurement::getValue (  ) const
// Algorithme :
//
{
    return value;
} //----- Fin de Méthode

tm* Measurement::getTime (  ) const
// Algorithme :
//
{
    return time;
} //----- Fin de Méthode


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

