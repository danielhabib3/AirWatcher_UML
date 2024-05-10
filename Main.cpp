//-------------------------------------------------------- Includes systemes
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>

//-------------------------------------------------------- Includes personels
#include "./Control/CsvParser.h"

using namespace std;


int main(int argc, char ** argv)
{
    CsvParser* csv = new CsvParser();

    // Tester la creation des sensors
    // vector<Sensor*> sensors = csv->createSensors();
    // cout << "There are " << sensors.size() << " sensors" << endl << endl;
    // for (vector<Sensor*>::const_iterator it = sensors.begin(); it != sensors.end(); ++it) {
    //     cout << (*it)->getSensorId() << " ( " << (*it)->getLatitude() << ", " << (*it)->getLongitude() << " )" << endl;
    // }

    // Tester la creation des cleaners
    vector<Cleaner*> cleaners = csv->createCleaners();
    cout << "There are " << cleaners.size() << " cleaners" << endl << endl;
    for (vector<Cleaner*>::const_iterator it = cleaners.begin(); it != cleaners.end(); ++it) {
        cout << (*it)->getCleanerId() << " ( " << (*it)->getLatitude() << ", " << (*it)->getLongitude() << " )" << " (" << asctime((*it)->getTimeStart()) << ", " << asctime((*it)->getTimeStop()) << ")" << endl;
    }

    delete csv;
    return 0;
}