using namespace std;
#include <iostream>

#include "PrivateIndividual.h"


PrivateIndividual::PrivateIndividual ( const PrivateIndividual & unPrivateIndividual )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <PrivateIndividual>" << endl;
#endif
} 


PrivateIndividual::PrivateIndividual ( string unPrivateIndividualId, Sensor* unSensor ) : privateIndividualId(unPrivateIndividualId), sensor(unSensor)
{
#ifdef MAP
    cout << "Appel au constructeur de <PrivateIndividual>" << endl;
#endif
} 


PrivateIndividual::~PrivateIndividual ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <PrivateIndividual>" << endl;
#endif
} 


Sensor* PrivateIndividual::getSensor (  ) const
{
    return sensor;
} 

string PrivateIndividual::getPrivateIndividualId (  ) const
{
    return privateIndividualId;
} 

