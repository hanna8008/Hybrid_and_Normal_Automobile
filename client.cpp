/*:
Programmer: Hanna Zelis
Date: 17 October 2021
Program: CSC1720 Program 2 - Automobiles as Objects: Client File
Filename: client.cpp

Description: This client file uses the header file and implementation file in order to test all of the non-virtual and pure virtual functions from both automobileType class and hybridAutomobileType class 

Assistance Received from: Dr. Suchan Ethan Cox (help figuring out how to compile - needed to use both object files: automobileType and the hybridAutomobileType)

How to compile:  g++ client.cpp automobileTypeImp.o hybridAutomobileTypeImp.o -o prog2

How to execute: ./prog2

*/


#include <iostream>
#include <string>
#include <cmath>
#include "automobileType.h"
#include "hybridAutomobileType.h"

using namespace std;

int main()
{


  

/* These first five tests are from testing lab 4 and 5.
       They will be highlighted out of the output for
       turning in program 2.


  //Automobile Test #1
  cout << "Automobile Test #1" << endl;
  automobileType vehicle;
  cout << vehicle.createDash();
  vehicle.drive(5);   
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;

  
  //Automobile Test #2
  cout << "Automobile Test #2" << endl;
  automobileType vehicle1(368, 20, 25);
  cout << vehicle1.createDash();
  vehicle1.drive(50);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;


  //Automobile Test #3
  cout << "Automobile Test #3" << endl;
  automobileType vehicle2(521, 10, 14);
  cout << vehicle2.createDash();
  vehicle2.drive(35);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;


  //Automobile Test #4
  cout << "Automobile Test #4" << endl;
  automobileType vehicle3(143, 8, 5);
  cout << vehicle3.createDash();
  vehicle3.drive(60);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;

  
  //Hybrid Test #1
  cout << "Hybrid Test #1" << endl;
  hybridAutomobileType hybrid1(368, 20, 25, 95, 100);
  cout << hybrid1.createDash();
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;

  //Hybrid Test #2
  cout << "Hybrid Test #2" << endl;
  hybridAutomobileType hybrid2(500, 10, 50, 42, 64);
  cout << hybrid2.createDash();
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
 
  */






  cout << endl;

  //starting to test the full program; create object and give it values
  cout << "Method: hybridAutomobileTypeImp hybrid1Prog (int, double, double, double, double, double)" << endl;
  cout << "Purpose: create object, hybrid1Prog, from hybridAutomobileType, and creating the dashboard with createDash" << endl;
  cout << endl;
  cout << "Specific inputs: hybrid1Prog(100, 30, 20, 250, 100, 10)" << endl;
  cout << "   Odometer Reading = 100 miles \n   Fuel Level = 30 gallons \n   Fuel Efficiency = 20 miles/gallon \n";
  cout << "   Max Fuel Tank Level = 250 gallons \n   Battery Charge = 100% \n   Battery Efficiency = 10 miles/1%" << endl;
  cout << endl;
  cout << "Pre and Post state of variables/objects (as they are just being set up)" << endl;
  hybridAutomobileType hybrid1Prog(100, 30, 20, 250, 100, 10);
  cout << hybrid1Prog.createDash();
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //getOdometer() method
  cout << "Method (object = hybrid1Prog): using getOdometer() method to output what the odometer is currently at." << endl;
  cout << "Purpose: the purpose of this method is to return what the current odometer reading is." << endl;
  cout << endl;
  cout << "Pre Odometer Reading value" << endl;
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl; 
  cout << "Specific Inputs: there are no parameters, so no inputs" << endl;
  cout << endl;
  cout << "Post Odometer Reading value" << endl;;
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;





  //updateOdometer(50)
  cout << "Method (object = hybrid1Prog): updateOdometer(int)" << endl;
  cout << "Purpose: add an integer value of miles to the current odometer reading" << endl;
  cout << endl;
  cout << "Pre Odometer Reading value" << endl;
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << "Specific inputs: updateOdometer(50)" << endl;
  cout << "    Add 50 miles (forward direction)" << endl;
  cout << endl;
  cout << "Post Odometer Reading value" << endl;
  hybrid1Prog.updateOdometer(50);
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;


  



  //updateOdometer(0)
  cout << "Method (object = hybrid1Prog): updateOdometer(int)" << endl;
  cout << "Purpose: add an integer value of miles to the current odometer reading" << endl;
  cout << endl;
  cout << "Pre Odometer Reading value" << endl;
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << "Specific inputs: updateOdometer(0)" << endl;
  cout << "    Add 0 miles (forward direction)" << endl;
  cout << endl;
  cout << "Post Odometer Reading value" << endl;
  hybrid1Prog.updateOdometer(0);
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //updateOdometer(-50)
  cout << "Method (object = hybrid1Prog): updateOdometer(int)" << endl;
  cout << "Purpose: add an integer value of miles to the current odometer reading" << endl;
  cout << endl;
  cout << "Pre Odometer Reading value" << endl;
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << "Specific inputs: updateOdometer(-50)" << endl;
  cout << "    Add 50 miles (reverse direction)" << endl;
  cout << endl;
  cout << "Post Odometer Reading value" << endl; 
  hybrid1Prog.updateOdometer(-50);
  cout << "   " << hybrid1Prog.getOdometer() << " miles." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //getMaxTank()
  cout << "Method (object = hybrid1Prog): getMaxTank()" << endl;
  cout << "Purpose: the purpose of this method is to return the maximum tank fuel level of the car" << endl;
  cout << endl;
  cout << "Pre Max Tank Level value" << endl;
  cout << "   " << hybrid1Prog.getMaxTank() << " gallons." << endl;
  cout << endl;
  cout << "Specific Inputs: there are no parameters, so no inputs" << endl;
  cout << endl;
  cout << "Post Max Tank Level value" << endl;;
  cout << "   " << hybrid1Prog.getMaxTank() << " gallons." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //getFuelLevel()
  cout << "Method (object = hybrid1Prog): getFuelLevel()" << endl;
  cout << "Purpose: the purpose of this method is to return the current fuel level of the car" << endl;
  cout << endl;
  cout << "Pre Fuel Level value" << endl;
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons." << endl;
  cout << endl;
  cout << "Specific Inputs: there are no parameters, so no inputs" << endl;
  cout << endl;
  cout << "Post Fuel Level value" << endl;;
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //addFuel(50)
  cout << "Method (object = hybrid1Prog): addFuel(double)" << endl;
  cout << "Purpose: add gallons of fuel to the current car fuel level" << endl;
  cout << endl;
  cout << "Pre Fuel Level value" << endl;
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons" << endl;
  cout << endl;
  cout << "Specific inputs: addFuel(50)" << endl;
  cout << "   Add 50 gallons (of fuel)" << endl;
  cout << endl;
  cout << "Post Fuel Level value" << endl;
  hybrid1Prog.addFuel(50);
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons" << endl;
  cout << endl;  
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;

  




  //addFuel(175)
  cout << "Method (object = hybrid1Prog): addFuel(double)" << endl;
  cout << "Purpose: add gallons of fuel to the current car fuel level" << endl;
  cout << endl;
  cout << "Pre Fuel Level value" << endl;
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons" << endl;
  cout << endl;
  cout << "Specific inputs: addFuel(175)" << endl;
  cout << "   Add 175 gallons (of fuel)" << endl;
  cout << endl;
  cout << "Post Fuel Level value" << endl;
  hybrid1Prog.addFuel(175);
  cout << "   " << hybrid1Prog.getFuelLevel() << " gallons" << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //getFuelEfficiency()
  cout << "Method (object = hybrid1Prog): getFuelEfficiency()" << endl;
  cout << "Purpose: the purpose of this method is to return the fuel efficiency of the car" << endl;
  cout << endl;
  cout << "Pre Fuel Efficiency value" << endl;
  cout << "   " << hybrid1Prog.getFuelEfficiency() << " miles/gallon." << endl;
  cout << endl;
  cout << "Specific Inputs: there are no parameters, so no inputs" << endl;
  cout << endl;
  cout << "Post Fuel Efficiency value" << endl;;
  cout << "   " << hybrid1Prog.getFuelEfficiency() << " miles/gallon." << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;










  //Creating a new dashboard with object hybrid1Prog but with its new values from testing the methods
  cout << "Method (object = hybrid1Prog): createDash()" << endl;
  cout << "Purpose: create an updated dashboard for object hybrid1Prog with new values from testing other methods" << endl;
  cout << endl;
  cout << "Specific Inputs: there are no parameters, so no inputs" << endl;
  cout << endl;
  cout << "Pre and Post state of variables/objects (as they are just being set up" << endl;
  cout << hybrid1Prog.createDash();
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //hybrid1Prog = second create dash
  cout << "Method (object = hybrid1Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid1Prog.createDash() << endl;
  cout << "Specific Inputs: drive(30)" << endl;
  cout << "   Hybrid car drives 30 miles" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid1Prog.drive(30);
  cout << hybrid1Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //hybrid1Prog = third create dash
  cout << "Method (object = hybrid1Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid1Prog.createDash() << endl;
  cout << "Specific Inputs: drive(45)" << endl;
  cout << "   Hybrid car drives 45 miles" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid1Prog.drive(45);
  cout << hybrid1Prog.createDash() << endl;  
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;








  //hybrid2Prog = first create dashboard for new object
  cout << "Method (object = hybrid2Prog): hybridAutomobileTypeImp hybrid2Prog (int, double, double, double, double, double)" << endl;
  cout << "Purpose: create object, hybrid2Prog, from hybridAutomobileType, and creating the dashboard with createDash" << endl;
  cout << endl;
  cout << "Specific inputs: hybrid2Prog(10, 25, 15, 40, 95, 5)" << endl;
  cout << "   Odometer Reading = 10 miles \n   Fuel Level = 25 gallons \n   Fuel Efficiency = 15 miles/gallon \n";
  cout << "   Max Fuel Tank Level = 40 gallons \n   Battery Charge = 95% \n   Battery Efficiency = 5 miles/1%" << endl;
  cout << endl;
  cout << "Pre and Post state of variables/objects (as they are just being set up)" << endl;
  hybridAutomobileType hybrid2Prog(10, 25, 15, 40, 95, 5);
  cout << hybrid1Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //hybrid2Prog = second create dash
  cout << "Method (object = hybrid2Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid2Prog.createDash() << endl;
  cout << "Specific Inputs: drive(50)" << endl;
  cout << "   Hybrid car drives 50 miles" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid2Prog.drive(50);
  cout << hybrid2Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
   





  //hybrid2Prog = third create dash
  cout << "Method (object = hybrid2Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid2Prog.createDash() << endl;
  cout << "Specific Inputs: drive(80)" << endl;
  cout << "   Hybrid car drives 80 miles" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid2Prog.drive(80);
  cout << hybrid2Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //hybrid2Prog = fourth create dash
  cout << "Method (object = hybrid2Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid2Prog.createDash() << endl;
  cout << "Specific Inputs: drive(-30)" << endl;
  cout << "   Hybrid car drives 30 miles (in reverse)" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid2Prog.drive(-30);
  cout << hybrid2Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;






  //hybrid2Prog = fifth create dash
  cout << "Method (object = hybrid2Prog): drive(double)" << endl;
  cout << "Purpose: after the hybrid car drives a number miles, we will see its impact on the dashboard for:\n   Odometer Reading\n   Fuel Level\n   Battery Charge." << endl;
  cout << endl;
  cout << "Pre dashboard" << endl;
  cout << hybrid2Prog.createDash() << endl;
  cout << "Specific Inputs: drive(300)" << endl;
  cout << "   Hybrid car drives 300 miles" << endl;
  cout << endl;
  cout << "Post dashboard" << endl;
  hybrid2Prog.drive(300);
  cout << hybrid2Prog.createDash() << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;

return 0;
}
