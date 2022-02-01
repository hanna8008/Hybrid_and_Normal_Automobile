/*
Programmer: Hanna Zelis
Date: 17 October 2021
Program: CSC1720 Program 2 - Advanced Automobile Objects: AutomobileType Implementation File
Filename: automobileTypeImp.cpp

Description: the guts of the not virtual methods: setValues(int, double, double), drive(double), createDash(), getOdometer(), getMaxTank(), getFuelLevel(), getFuelEfficiency(), updateOdometer(int) and addFuel(double). It also includes 2 constructors: one default and one parameterized constructor

Assistance Received from: Ethan Cox

How to compile (into an object file):  g++ -c automobileTypeImp.cpp

How to execute: even though you cannot compile this file, the client program that uses this file when compiling will be executed with the following format: g++ client.cpp automobileTypeImp.o hybridAutomobileTypeImp.o -o prog2

*/

#include <iostream>
#include <string>
#include <cmath>
#include "automobileType.h"

using namespace std;

//Ethan Cox helped me figure out that I needed three paramaters for this method
void automobileType::setValues(int odoNum, double fuelLNum, double fuelENum)
{

  if ((odoNum >= 0) && (fuelLNum >= 0) && (fuelENum >= 1))
  {
    odometerReading = odoNum;
    fuelLevel = fuelLNum;
    fuelEfficiency = fuelENum;
  }

  //ensures the odometer is not set to less
    if (odoNum < 0)
    {
      cerr << "You cannot have an invalid odometer." << endl;
    }

    if ((fuelLNum < 0) && (fuelLNum > maxVehicleFuel))
    {
      cerr << "Invalid fuel level" << endl;
    }

    if (fuelENum < 1)
    {
      cerr << "Invalid fuel efficiency" << endl;    
    }



}












void automobileType::drive(double miles)
{
 //updates odometer based off how many miles are to be driven
  odometerReading = odometerReading + (abs(miles));
      //Ethan suggested to create miles as an absolute (to help with reverse)

 //updates how much fuel is left based on miles to drive
  fuelLevel = fuelLevel - (miles / (fuelEfficiency));

}







string automobileType::createDash() const
{
  //Caitlin Black and Ethan Cox helped me figure out that I needed to create a string variable inside this method's body and then create the output as the value of the string
  string dashboardCreate;

  //having a problem with returning string; Ethan Cox helped me figure out where exatly to put "to_string" function in the string's value
  dashboardCreate = "   Odometer Reading = " + to_string(odometerReading) + " miles. \n" + "   Fuel Level = " + to_string(fuelLevel) + " gallons. \n" + "   Fuel Efficiency = " + to_string(fuelEfficiency) + " miles/gallon. \n" + "   Maximum Vehicle Fuel Tank = " + to_string(maxVehicleFuel) + " gallons. \n";

  return dashboardCreate;

}




int automobileType::getOdometer()
{

  return odometerReading;

}




double automobileType::getMaxTank()
{

  return maxVehicleFuel;

}




double automobileType::getFuelLevel()
{

  return fuelLevel;

}



double automobileType::getFuelEfficiency()
{

  return fuelEfficiency;

}




void automobileType::updateOdometer(int odoNum)
{

  odometerReading = odometerReading + (abs(odoNum)); 
      //Ethan suggested to make odoNum absolute when the car drives in reverse

}



void automobileType::addFuel(double fuelLNum)
{

  if ((fuelLevel + fuelLNum) > maxVehicleFuel)
  {
    cout << "Too much fuel. OVERFUEL! Setting to the car's max fuel tank level" << endl;
    fuelLevel = maxVehicleFuel;
  }

  if ((fuelLevel + fuelLNum < maxVehicleFuel) && (fuelLevel + fuelLNum > 0))
    fuelLevel = fuelLevel + fuelLNum; 

}




automobileType::automobileType()
{

  maxVehicleFuel = 10;
  setValues(0, 10, 20);

}






automobileType::automobileType(int odoNum, double fuelLNum, double fuelENum, double maxNum)
{

  setValues(odoNum, fuelLNum, fuelENum);
  maxVehicleFuel = maxNum;  

}




