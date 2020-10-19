#ifndef UTILITY_FUNC_H
#define UTILITY_FUNC_H

struct purchases{
   int day;
   int month;
   int year;
   double money;
   string reason;
};


void writeToFile (string money, int day, int month, int year);
void readFromFile (string fileName);

#endif
