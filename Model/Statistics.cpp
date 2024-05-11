using namespace std;
#include <iostream>

#include "Statistics.h"


Statistics::Statistics ( const Statistics & unStatistics )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Statistics>" << endl;
#endif
} 


Statistics::Statistics ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Statistics>" << endl;
#endif
} 


Statistics::~Statistics ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Statistics>" << endl;
#endif
} 


