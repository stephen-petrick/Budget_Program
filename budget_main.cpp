#include <fstream>
#include <iostream>
//#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std;


void writeToFile (int day, int month, int year);

int main() {
	cout << "Hello world" << endl;
	cout << "Type in a number: ";
	int x=0;
	cin >> x;
	cout << "This is the number stored in variable x: " << x << endl;

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
	return 0;
}

void writeToFile (int day, int month, int year) {

	ofstream write;
	write.open("test_file.csv");
	write << day << "," << month << "," << year << endl; //not sure if endl suppose to be there
	write.close();

}
