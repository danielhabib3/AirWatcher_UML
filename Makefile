CCFLAGS = -ansi -pedantic -Wall -std=c++11 #-DMAP

exe : Main.o User.o Agency.o Cleaner.o Data.o Measurement.o PrivateIndividual.o Provider.o Sensor.o Statistics.o View.o Controller.o CsvParser.o
	g++ -o exe Main.o Agency.o Cleaner.o Data.o Measurement.o PrivateIndividual.o Provider.o Sensor.o Statistics.o User.o View.o Controller.o CsvParser.o 

User.o : ./Model/User.cpp ./Model/User.h
	g++ -o User.o -c ./Model/User.cpp $(CCFLAGS)

Agency.o : ./Model/Agency.cpp ./Model/Agency.h
	g++ -o Agency.o -c ./Model/Agency.cpp $(CCFLAGS) 
	
Cleaner.o : ./Model/Cleaner.cpp ./Model/Cleaner.h
	g++ -o Cleaner.o -c ./Model/Cleaner.cpp $(CCFLAGS) 
	
Data.o : ./Model/Data.cpp ./Model/Data.h
	g++ -o Data.o -c ./Model/Data.cpp $(CCFLAGS) 

Measurement.o : ./Model/Measurement.cpp ./Model/Measurement.h
	g++ -o Measurement.o -c ./Model/Measurement.cpp $(CCFLAGS)

PrivateIndividual.o : ./Model/PrivateIndividual.cpp ./Model/PrivateIndividual.h
	g++ -o PrivateIndividual.o -c ./Model/PrivateIndividual.cpp $(CCFLAGS)

Provider.o : ./Model/Provider.cpp ./Model/Provider.h
	g++ -o Provider.o -c ./Model/Provider.cpp $(CCFLAGS)

Sensor.o : ./Model/Sensor.cpp ./Model/Sensor.h
	g++ -o Sensor.o -c ./Model/Sensor.cpp $(CCFLAGS)

Statistics.o : ./Model/Statistics.cpp ./Model/Statistics.h
	g++ -o Statistics.o -c ./Model/Statistics.cpp $(CCFLAGS)

View.o : ./View/View.cpp ./View/View.h
	g++ -o View.o -c ./View/View.cpp $(CCFLAGS)

Controller.o : ./Control/Controller.cpp ./Control/Controller.h
	g++ -o Controller.o -c ./Control/Controller.cpp $(CCFLAGS)

CsvParser.o : ./Control/CsvParser.cpp ./Control/CsvParser.h
	g++ -o CsvParser.o -c ./Control/CsvParser.cpp $(CCFLAGS)

Main.o : Main.cpp ./View/View.h
	g++ -o Main.o -c Main.cpp $(CCFLAGS)

clean: 
	rm *.o
	rm exe	