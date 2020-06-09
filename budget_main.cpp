#include <fstream>
#include <iostream>
#include <string>
//#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std;


void writeToFile (string money, int day, int month, int year);
void readFromFile (string fileName);

int main() {

//	int date [8]; //not sure if possible to do with array
	int day = 0, month = 0, year = 0;
   string money;
//	cout << " Day, month, year initial: " << day << month << year << endl; check for initialization
   cout << "Enter amount: ";
   cin >> money:;
   cout << "Enter day: ";
	cin >> day;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter year: ";
	cin >> year;
	cout << "Running 'writeToFile' function...'" << endl;
	writeToFile(money,day,month,year);
	cout << "Success." << endl;
   cout << "Running 'readFromFile' funciton ...'" <<endl;
   readFromFile("test_file.csv");
	cout << "Success." << endl;
   return 0;
}

void writeToFile (string money, int day, int month, int year) {

   string moneyBuffer = money;
   for (auto i=begin(moneyBuffer); i!=end(moneyBuffer); i++){
      if (moneyBuffer.at(i) == ',')
         moneyBuffer.at(i) = "'";
   }
   double moneyDouble = string.stod(

	ofstream write;
	write.open("test_file.csv");
	write << money << "," << day << "," << month << "," << year << endl; 
	write.close();

}

void readFromFile (string fileName){

   string buffer;
   ifstream read;
   read.open(fileName);
   read >> buffer;
   cout << "Data in file " << fileName << ":" << endl;
   cout << buffer;
   cout << "\nFinished." << endl;
   read.close();

}
