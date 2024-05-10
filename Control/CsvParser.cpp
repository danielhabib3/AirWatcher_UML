/*************************************************************************
                           CsvParser  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <CsvParser> (fichier CsvParser.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CsvParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
vector<Sensor*> CsvParser::createSensors (  )
// Algorithme :
//
{
    ifstream fic ("./dataset/sensors.csv");
    if (!fic.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
    }
    string ligne;
    string sensorIdParsed;
    string latitudeParsed;
    string longitudeParsed;
    vector<Sensor*> sensors;

    while(getline(fic, ligne))
    {
        stringstream ss(ligne);
        getline(ss, sensorIdParsed, ';');
        getline(ss, latitudeParsed, ';');
        getline(ss, longitudeParsed, ';');
        Sensor* sensor = new Sensor(sensorIdParsed, stod(latitudeParsed), stod(longitudeParsed));
        sensors.push_back(sensor);
    }
    return sensors;
} //----- Fin de Méthode

vector<Cleaner*> CsvParser::createCleaners (  )
// Algorithme :
//
{
    ifstream fic ("./dataset/cleaners.csv");
    if (!fic.is_open()) {
        cerr << "Erreur lors de l'ouverture du fichier." << endl;
    }
    string ligne;
    string cleanerIdParsed;
    string latitudeParsed;
    string longitudeParsed;
    string timeStartParsed;
    string timeStopParsed;
    vector<Cleaner*> cleaners;

    while(getline(fic, ligne))
    {
        stringstream ss(ligne);
        getline(ss, cleanerIdParsed, ';');
        getline(ss, latitudeParsed, ';');
        getline(ss, longitudeParsed, ';');
        getline(ss, timeStartParsed, ';');
        getline(ss, timeStopParsed, ';');
        timeStartParsed += ":"; timeStopParsed += ":";
        Cleaner* cleaner = new Cleaner(cleanerIdParsed, stod(latitudeParsed), stod(longitudeParsed), timeStartParsed, timeStopParsed);
        cleaners.push_back(cleaner);
    }
    return cleaners;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CsvParser & CsvParser::operator = ( const CsvParser & unCsvParser )
// Algorithme :
//
{
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CsvParser::CsvParser ( const CsvParser & unCsvParser )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CsvParser>" << endl;
#endif
} //----- Fin de CsvParser (constructeur de copie)


CsvParser::CsvParser ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CsvParser>" << endl;
#endif
} //----- Fin de CsvParser


CsvParser::~CsvParser ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CsvParser>" << endl;
#endif
} //----- Fin de ~CsvParser


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

