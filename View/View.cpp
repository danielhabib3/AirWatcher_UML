using namespace std;
#include <iostream>

#include "View.h"

View::View ( const View & unView )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <View>" << endl;
#endif
} 

View::View ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <View>" << endl;
#endif
}

View::~View ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <View>" << endl;
#endif
} 
