#include <iostream>
#include <string>
#include <fstream>
#include "utility_functions.h" //apparently good practice to include headers in corresponding source file to catch possible mismatching file declarations
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
using namespace std;


void writeToFile (string money, string reason, string fileName, int day, int month, int year) {

   string moneyBuffer = money;
   string moneyBufferPureNumber = money;
   string reasonBuffer = reason;
   string fileWritingTo = fileName;
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
   
   //Loop to convert the string of numbers in a double 
   cout << "moneyBufferPureNumber vanilla: " << moneyBufferPureNumber << endl; //print original string of number
   for (int i=0; i<moneyBufferPureNumber.length();  i++){ 
         if (moneyBufferPureNumber[i] == ','){  //removing comma so only digits remain
            cout << "Value to remove: " << moneyBufferPureNumber[i] << " Removed comma" << endl; //print value before removal to double check
            moneyBufferPureNumber.erase(moneyBufferPureNumber.begin()+i); //remove comma
         }
   }
   cout << "moneyBufferPureNumber: " << moneyBufferPureNumber << endl; //print to see if all commas are removed. still a string at this poing, need to convert to double now
   size_t idx=0; //some pointer for conversion function to work
   double moneyDouble = stod(moneyBufferPureNumber, &idx); //convert string to double
   cout << "moneyDouble: " << moneyDouble << endl; //print double. should look the same as output from string two lines above
   
   cout << "Appending reason: " << reasonBuffer << " to file." << endl; //append reason string 
//Writing only line and writing over it. Potentially useful for debugging so DON'T DELETE
	//ofstream write;
	//write.open("test_file.csv");
   ////CSV FORMAT: place value marked number (astrisk in place of commas), pure number (only decimal as symobl), day (number), month (number), year
	//write << moneyBuffer << "," << moneyBufferPureNumber << "," << day << "," << month << "," << year << endl; 
	//write.close();

//Append new entry to file. I don't really know how it works though. Like why is the ifstream needed?
   ofstream fout;
   ifstream fin;
   fin.open(fileWritingTo);
   fout.open(fileWritingTo, ios::app);
   if (fin.is_open()) {
      fout << moneyBuffer << "," << moneyBufferPureNumber << "," << day << "," << month << "," << year << "," << reasonBuffer << endl;//appending the reason string at the end w/o parsing commas out, since it *shouldn't* cause trouble being at the end 
   }
   fin.close();
   fout.close();

}

void printFromFile (string fileName){

   string buffer;
   cout << "Data in file " << fileName << ":" << endl;
//Read only one line of file. May be useful for debugging so DON'T DELETE
//   ifstream read;
//   read.open(fileName);
//   read >> buffer;
//Reads multiple lines from file and prints them
   fstream read;
   read.open(fileName, ios::in);
   if (read.is_open()){
      while (getline(read, buffer)){
         cout << buffer << endl;
      }
   }
   read.close();
   cout << "\nFinished." << endl;
}

vector<purchases> readFromFile (string fileName){

   vector<purchases> results;  
   ifstream myFile(fileName); //I think this also opens the file

   //Check if file is open
   if (!myFile.is_open()) throw runtime_error("Could not open file"); //not quite sure what this is other than error catcher. need to read about runtime_error later
   
   //helper variables
   string temp, currentLine, currentWord;
   vector<string> placeholder; //vector to hold file contents, then convert to purchase vector
   int rowIndex = 0;
   
   //loop to get file contents into a temporary string vector. will later convert to a purchase vector
   while (myFile >> temp){

      stringstream ss(currentLine); //creates stringstream of current line

      //reads current row, using comma as delimiter, and storing it into currentWord
      while (getline(ss, currentWord, ',')){

         placeholder.push_back(currentWord); //store entire row into placeholder

     }
  }

  cout << placeholder;

  return results;

}







