/*
Programmer: Hanna Zelis
Date: 17 October 2021
Program: CSC1720 Program 2 - Inheritance/Hybrid Automobile Header File
Filename: hybridAutomobileType.h

Description: This is the header file for the hybridAutomobileType class where the variables and methods are declared in either public or private (depending what it is).

Assistance Received from: N/A

How to compile: g++ hybridAutomobileType.h

How to execute: this will not be executed, but rather will be put into the implementation file which will then be executed with the client file (refer to client file for execution)
*/

#include <string>

using namespace std;

class hybridAutomobileType: public automobileType
{
  public:
    void setChargeLevel(double);  
    double getChargeLevel();
    void setChargeEfficiency(double);
    double getChargeEfficiency();
    string createDash() const;

    void drive(double);
    
    //constructors
    hybridAutomobileType(int, double, double, double, double, double);
    hybridAutomobileType();


  private:
    double batteryCharge;
    double batteryEfficiency;
};
