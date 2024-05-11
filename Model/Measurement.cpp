using namespace std;
#include <iostream>
#include "Measurement.h"

Measurement &Measurement::operator=(const Measurement &unMeasurement)
{
    return *this;
}

Measurement::Measurement(const Measurement &unMeasurement)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Measurement>" << endl;
#endif
}

Measurement::Measurement(Sensor *unSensor, string unType, double uneValue, string timeString)
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
}

Measurement::~Measurement()
{
#ifdef MAP
    cout << "Appel au destructeur de <Measurement>" << endl;
#endif
}

Sensor *Measurement::getSensor() const
{
    return sensor;
}

string Measurement::getType() const
{
    return type;
}

double Measurement::getValue() const
{
    return value;
}

tm *Measurement::getTime() const
{
    return time;
}
