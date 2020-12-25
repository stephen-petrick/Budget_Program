#include <fstream>
#include <iostream>
#include <string>
#include "time_objects.h"
#include "utility_functions.h"
//#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std; //according to a stack overflow post, using this is bad practice since it can cause conflicts with functions of the same name
                     // need to do std::string and etc if not using tho. will keep it for time being for convenience


//void writeToFile (string money, int day, int month, int year);
//void readFromFile (string fileName);

int main() {
//CSV FORMAT: place value marked number (astrisk in place of commas), pure number (only decimal as symobl), day (number), month (number), year

//	int date [8]; //not sure if possible to do with array
	int day = 10, month = 11, year = 122;
   string money;
   string fileName = "test_file.csv";
   string reason = "TestReason";
//	cout << " Day, month, year initial: " << day << month << year << endl; check for initialization
   cout << "Enter amount: ";
   cin >> money;
//   cout << "Enter day: ";
//  	cin >> day;
//  	cout << "Enter month: ";
//  	cin >> month;
//  	cout << "Enter year: ";
//  	cin >> year;
	cout << "Running 'writeToFile' function...'" << endl;
	writeToFile(money,reason,fileName,day,month,year);
	cout << "Success." << endl;
   cout << "Running 'readFromFile' funciton ...'" <<endl;
   printFromFile(fileName);
	cout << "Success." << endl;

   cout << "Running 'readFromFile' function ... '" << endl;
   vector<purchase>placeholder = readFromFile(fileName);
   cout << "Success." << endl;

   return 0;
}
