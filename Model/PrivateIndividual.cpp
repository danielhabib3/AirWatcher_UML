using namespace std;
#include <iostream>

#include "PrivateIndividual.h"

PrivateIndividual::PrivateIndividual(const PrivateIndividual &unPrivateIndividual)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PrivateIndividual>" << endl;
#endif
}

PrivateIndividual::PrivateIndividual(string unPrivateIndividualId, Sensor *unSensor, bool isTrustable, int nbPoints) : privateIndividualId(unPrivateIndividualId), sensor(unSensor), trustable(isTrustable), points(nbPoints)
{
#ifdef MAP
    cout << "Appel au constructeur de <PrivateIndividual>" << endl;
#endif
}

PrivateIndividual::~PrivateIndividual()
{
#ifdef MAP
    cout << "Appel au destructeur de <PrivateIndividual>" << endl;
#endif
}

Sensor *PrivateIndividual::getSensor() const
{
    return sensor;
}

string PrivateIndividual::getPrivateIndividualId() const
{
    return privateIndividualId;
}

bool PrivateIndividual::getTrustable() const
{
    return trustable;
}

void PrivateIndividual::setTrustable(bool trustable)
{
    this->trustable = trustable;
}

int PrivateIndividual::getPoints() const
{
    return points;
}

void PrivateIndividual::setPoints(int points)
{
    this->points = points;
}