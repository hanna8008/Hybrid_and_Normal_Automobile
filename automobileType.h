/*
Programmer: Hanna Zelis
Date: 17 October 2021 
Program: CSC1720 Program 2 - Advanced Automobile Objects: AutomobileType Header File
Filename: automobileType.h

Description: holds the base class automobileType variables and methods

Assistance Received from: Ethan Cox

How to compile: g++ automobileType.h

How to execute: this file will not be executed, as it will be used as a preprocessor in the implementation file and the client file
*/

#include <string>
using namespace std;

class automobileType
{
  public:
    void setValues(int, double, double);
    string createDash() const;
    void drive(double);


    int getOdometer();
    double getMaxTank();
    double getFuelLevel();
    double getFuelEfficiency();

    void updateOdometer(int);
    void addFuel(double);


    automobileType(int, double, double, double);
    automobileType();


//Ethan Cox helped me figure out what I should make public and private
  private: 
    int odometerReading;
    double fuelLevel;
    double fuelEfficiency;
    double maxVehicleFuel;
};   
