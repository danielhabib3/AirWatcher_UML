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
    // Instantiate the controller
    Controller* controller = new Controller();
    Data* data = controller->getData();
    
    while(1)
    {
        // Declare variables
        int choice;
        vector<string> parameters;
        stringstream ss;
        string year;
        string month;
        string day;
        double longitude;
        double latitude;
        tm* start;
        tm* end;
        tm* time;
        double radius;


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
        
        cin >> choice;
    	
        cout << endl;
        bool exit = false;
        switch(choice)
        {
            case 1:
                // Get the parameters for the method getMeanAirQualityByZoneByPeriod
                // L'ordre des parametres est le suivant: data - start - end - lat - lon - radius
                parameters = getParametersOfGetMeanAirQualityByZoneByPeriod();
                
                // Call the method getMeanAirQualityByZoneByPeriod with the parameters
                ss.str(""); ss.clear();  year.clear(); month.clear(); day.clear(); // Réinitialiser le ss, year, month, day
                ss << parameters[0] << '-';
                getline(ss, year, '-');
                getline(ss, month, '-');
                getline(ss, day, '-');	
                start = new tm();
                start->tm_sec = 0;
                start->tm_min = 0;
                start->tm_hour = 0;
                start->tm_year = stoi(year) - 1900;
                start->tm_mon = stoi(month) - 1;
                start->tm_mday = stoi(day);

                ss.str(""); ss.clear(); year.clear(); month.clear(); day.clear(); // Réinitialiser le ss, year, month, day
                ss << parameters[1] << '-';
                getline(ss, year, '-');
                getline(ss, month, '-');
                getline(ss, day, '-');
                end = new tm();
                end->tm_sec = 0;
                end->tm_min = 0;
                end->tm_hour = 0;
                end->tm_year = stoi(year) - 1900;
                end->tm_mon = stoi(month) - 1;
                end->tm_mday = stoi(day);

                latitude = stod(parameters[2]);
                longitude = stod(parameters[3]);
                radius = stod(parameters[4]);

                int meanAirQuality = controller->getMeanAirQualityByZoneByPeriod(data, start, end, latitude, longitude, radius);

                // Display the result
                cout << "The mean air quality index during the period in the zone is: " << meanAirQuality << endl;
                break;
            
            case 2:
            // Get the parameters for the method getMeanAirQualityByZoneByPeriod
                // L'ordre des parametres est le suivant: data - start - end - lat - lon - radius
                parameters = getParametersOfGetMeanAirQualityByZoneByTime();
                
                // Call the method getMeanAirQualityByZoneByPeriod with the parameters
                ss.str(""); ss.clear();  year.clear(); month.clear(); day.clear(); // Réinitialiser le ss, year, month, day
                ss << parameters[0] << '-';
                getline(ss, year, '-');
                getline(ss, month, '-');
                getline(ss, day, '-');	
                time = new tm();
                time->tm_sec = 0;
                time->tm_min = 0;
                time->tm_hour = 0;
                time->tm_year = stoi(year) - 1900;
                time->tm_mon = stoi(month) - 1;
                time->tm_mday = stoi(day);

                latitude = stod(parameters[1]);
                longitude = stod(parameters[2]);
                radius = stod(parameters[3]);

                int meanAirQuality = controller->getMeanAirQualityByZoneByTime(data, time, latitude, longitude, radius);

                // Display the result
                cout << "The mean air quality index during that time in the zone is: " << meanAirQuality << endl;
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
    delete controller;
}

void View::DisplayExitMessage()
{
    cout << endl << "================================================" << endl;
    cout << "Thank you for using the AirWatcher application, Goodbye!" << endl;
    cout << "================================================" << endl;
}

vector<string> View::getParametersOfGetMeanAirQualityByZoneByPeriod()
{
    vector<string> parameters;
    double longitude, latitude, radius;
    string startDate, endDate;
    cout << "Please enter the start date of the period (format: YYYY-MM-DD): ";
    cin >> startDate;
    cout << "Please enter the end date of the period (format: YYYY-MM-DD): ";
    cin >> endDate;
    cout << "Please enter the longitude of the center of the zone: ";
    cin >> longitude;
    cout << "Please enter the latitude of the center of the zone: ";
    cin >> latitude;
    cout << "Please enter the radius of the zone: ";
    cin >> radius;
    parameters.push_back(startDate);
    parameters.push_back(endDate);
    parameters.push_back(to_string(latitude));
    parameters.push_back(to_string(longitude));
    parameters.push_back(to_string(radius));

    return parameters;
}
