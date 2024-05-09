//-------------------------------------------------------- Includes systemes
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

//-------------------------------------------------------- Includes personels
#include "./Control/CsvParser.h"

using namespace std;


int main(int argc, char ** argv)
{
    CsvParser* csv = new CsvParser();
    vector<Sensor*> sensors = csv->createSensors();
    cout << "There are " << sensors.size() << " sensors" << endl << endl;
    for (vector<Sensor*>::const_iterator it = sensors.begin(); it != sensors.end(); ++it) {
        cout << (*it)->getSensorId() << " ( " << (*it)->getLatitude() << ", " << (*it)->getLongitude() << " )" << endl;
    }
    delete csv;
    return 0;
}