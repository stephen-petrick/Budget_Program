#include <fstream>
#include <iostream>
#include <string>
//#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std;


void writeToFile (int day, int month, int year);
void readFromFile (string fileName);

int main() {

//	int date [8]; //not sure if possible to do with array
	int day = 0, month = 0, year = 0;
//	cout << " Day, month, year initial: " << day << month << year << endl; check for initialization
	cout << "Enter day: ";
	cin >> day;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter year: ";
	cin >> year;
	cout << "Running 'writeToFile' function...'" << endl;
	writeToFile(day,month,year);
	cout << "Success." << endl;
   cout << "Running 'readFromFile' funciton ...'" <<endl;
   readFromFile("test_file.csv");
	cout << "Success." << endl;
   return 0;
}

void writeToFile (int day, int month, int year) {

	ofstream write;
	write.open("test_file.csv");
	write << day << "," << month << "," << year << endl; //not sure if endl suppose to be there
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
