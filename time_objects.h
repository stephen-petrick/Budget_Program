#ifndef TIME_OBJECTS_H
#define TIME_OBJECTS_h
#include "utility_functions.h"
#include <vector>

class Days {
   
   public:
      int getGrandTotal (void);
      void listDaysPurchases (void); 
      Days(); //constructor

   private:
      int grandTotal;
      vector<purchases> DaysPurchases;
};
#endif
