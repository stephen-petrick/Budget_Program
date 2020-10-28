#ifndef UTILITY_FUNC_H
#define UTILITY_FUNC_H
#include <string>
using namespace std;

struct purchases{
   int day;
   int month;
   int year;
   double money;
   string reason;
};


void writeToFile (string money, string reason, int day, int month, int year);
void printFromFile (string fileName);

#endif
