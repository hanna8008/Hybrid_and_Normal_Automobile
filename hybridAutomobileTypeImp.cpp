/*
Programmer: Hanna Zelis
Date: 17 October 2021
Program: CSC1720 Program 2 - Inheritance/Hybrid Automobile: Implementation File
Filename: hybridAutomobileTypeImp.cpp

Description: This is the implementation file where the battery charge percent and the charge efficiency are set and returned. The default constructor and the paramaterized constructor is also in this file. For the 5 parameter constructor, it takes into account the public method of setValues from the base class automobileType in order to print out the original automobile information in addition to the hybrid automobile information in one method. This also updates the battery charge based on distance and calculates the fuel level after a certain battery charge has been reached

Assistance Received from: Dr. Suchan

How to compile (into an object file):  g++ -c hybridAutomobileTypeImp.cpp

How to execute: this will be executed with the client file (go to client file for how the program will be executed)

*/

#include <iostream>
#include <string>
#include <cmath>
#include "automobileType.h"
#include "hybridAutomobileType.h"

using namespace std;

//sets the value of the hybrid automobile battery charge percentage
void hybridAutomobileType::setChargeLevel(double charge)
{

    batteryCharge = charge;

}


//returns the value of the battery charge percentage
double hybridAutomobileType::getChargeLevel()
{

  return batteryCharge;

}


//sets the hybrid automobile battery efficiency
void hybridAutomobileType::setChargeEfficiency(double efficiency)
{

    batteryEfficiency = efficiency;

}

//returns the battery efficiency of the hybrid automobile
double hybridAutomobileType::getChargeEfficiency()
{

  return batteryEfficiency; 

}


//returns all of the values of the values from the base class automobileType in addition to the information from the hybridAutomobile derived class
string hybridAutomobileType::createDash() const
{

  return automobileType::createDash() + "   Amount of Battery Charge = " + to_string(batteryCharge) + "%. \n" + "   Battery Efficiency = " + to_string(batteryEfficiency) + " miles. \n";

}




void hybridAutomobileType::drive(double distance)
{

double batteryTravel = (batteryCharge - 15) * batteryEfficiency;
  //determines how far the car can go before the 15% charge occurs

double distanceLeft = distance - batteryTravel;
  //distance available based on how much charge is left




if (distanceLeft > 0) // if you still have distance left after using all charge
  {

    batteryCharge = batteryCharge - (batteryTravel / batteryEfficiency);
      //updating battery charge

    updateOdometer(batteryTravel);
      //calls this function to update the odometer when the car runs out of appropriate charge

    automobileType::drive(distanceLeft);
      //calls the automobileType to make it drive the amount of miles left to drive

    batteryCharge = batteryCharge + (distanceLeft / 20);
      //adds on 1% of charge after every 20 miles
  }


else
  //if you do not have any distance left after using charge
  {
    batteryCharge = batteryCharge - (abs((distance / batteryEfficiency)));
      //updates battery charge when not running out of charge

    updateOdometer(distance);
      //updates the odometer w/o running out of charge

   
  }

}



//defaults the values of the hybrid auotmobile to 0
hybridAutomobileType::hybridAutomobileType()
                   : automobileType() 
{

  batteryEfficiency = 0;
  batteryCharge = 0;

}


//my code was not runnning because I spelled automobile wrong and so Dr. Suchan helped me figure that bug out
hybridAutomobileType::hybridAutomobileType(int odoNum, double fuelLNum, double fuelENum, double maxNum, double chargeNum, double batteryENum)
                                         : automobileType(odoNum, fuelLNum, fuelENum, maxNum)
{

  setChargeLevel(chargeNum);
  setChargeEfficiency(batteryENum);

}




