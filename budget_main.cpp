#include <fstream>
#include <iostream>
#include <string>
//#include <cstdio> //maybe not necessary, seems to be equivalent to stdio.h in c which is the same as iostream
using namespace std; //according to a stack overflow post, using this is bad practice since it can cause conflicts with functions of the same name
                     // need to do std::string and etc if not using tho. will keep it for time being for convenience


void writeToFile (string money, int day, int month, int year);
void readFromFile (string fileName);

int main() {

//	int date [8]; //not sure if possible to do with array
	int day = 0, month = 0, year = 0;
   string money;
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
	writeToFile(money,day,month,year);
	cout << "Success." << endl;
   cout << "Running 'readFromFile' funciton ...'" <<endl;
   readFromFile("test_file.csv");
	cout << "Success." << endl;
   return 0;
}

void writeToFile (string money, int day, int month, int year) {

   string moneyBuffer = money;
   string moneyBuffer2 = money;
   //for some reason won't work using an iterator
/*   for (auto i=begin(moneyBuffer); i!=end(moneyBuffer); i++){ 
      if (moneyBuffer[*i] == ','){
         moneyBuffer[*i] = '*';
         cout << "Replaced comma" << endl;
      }
   }
*/
   //change commas from input to astrisk to prevent parsing conflict in CSV file
   for (int i=0; i<moneyBuffer.length();  i++){ 
         if (moneyBuffer[i] == ','){
            moneyBuffer[i] = '*';
            cout << "Replaced comma" << endl;
         }
   }

   cout << "Parsed moneyBuffer: " << moneyBuffer << endl;

   cout << "moneyBuffer2 vanilla: " << moneyBuffer2 << endl;
   for (int i=0; i<moneyBuffer2.length();  i++){ 
         if (moneyBuffer2[i] == ','){
            cout << "Value to remove:" << moneyBuffer2[i] << " Removed comma" << endl;
            moneyBuffer2.erase(moneyBuffer2.begin()+i);
         }
   }
   cout << "moneyBuffer2: " << moneyBuffer2 << endl;
   size_t idx=0;
   double moneyDouble = stod(moneyBuffer2, &idx);
   cout << "moneyDouble: " << moneyDouble << endl;

	ofstream write;
	write.open("test_file.csv");
	write << moneyBuffer << "," << day << "," << month << "," << year << endl; 
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
