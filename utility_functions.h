#ifndef UTILITY_FUNC_H
#define UTILITY_FUNC_H
#include <string>
#include <vector>
//using namespace std;

struct purchases{
   int day;
   int month;
   int year;
   double money;
   std::string reason;
};


void writeToFile (std::string money, std::string reason, std::string fileName, int day, int month, int year);
void printFromFile (std::string fileName);
std::vector<purchases> readFromFile (std::string fileName);

#endif
