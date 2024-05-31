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

void View::StartApplication()
{
    while(1)
    {
        cout << "Welcome to the Air Quality Index application" << endl;
        cout << "================================================" << endl;
        cout << "Choose a function to execute" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "1. Get the mean air quality index during a period of time for a specific zone" << endl;
        cout << "2. Get the mean air quality index at a specific time for a specific zone" << endl;
        cout << "3. Get the sensors that are similar to a specific sensor" << endl;
        cout << "4. Exit application" << endl;
        cout << "================================================" << endl;

        cout << "Enter the number of the function you want to execute: ";
        int choice;
        cin >> choice;
    	
        cout << endl;
        bool exit = false;
        switch(choice)
        {
            case 1:
                break;
            
            case 2:
                break;

            case 3:
                break;
            
            case 4:
                exit = true;
                break;
        }

        if(exit)
        {
            break;
        }
    }
}

void View::DisplayExitMessage()
{
    cout << endl << "================================================" << endl;
    cout << "Thank you for using the AirWatcher application, Goodbye!" << endl;
    cout << "================================================" << endl;
}
