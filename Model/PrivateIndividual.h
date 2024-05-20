#if !defined(PRIVATEINDIVIDUAL_H)
#define PRIVATEINDIVIDUAL_H

#include "User.h"
#include "Sensor.h"
using namespace std;

class Sensor; 

class PrivateIndividual : public User
{

public:
    PrivateIndividual(const PrivateIndividual &unPrivateIndividual);
    PrivateIndividual(string unPrivateIndividualId, Sensor* unSensor, bool isTrustable = true, int nbPoints = 0);
    virtual ~PrivateIndividual();
    Sensor* getSensor() const;
    string getPrivateIndividualId() const;
    bool getTrustable() const;
    void setTrustable(bool trustable);
    int getPoints() const;
    void setPoints(int points);

private:
    string privateIndividualId;
    Sensor *sensor;
    bool trustable; // true if the private is trustable, false otherwise
    int points;     // number of the private's individual points
};

#endif // PRIVATEINDIVIDUAL_H
