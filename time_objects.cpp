#include <iostream>
#include <vector>
#include "utility_functions.h"

using namespace std;

class Days {
   
   public:
      int getGrandTotal ( void )

      Days(); //constructor

   private:
      int grandTotal;

};

//Constructor function
Days::Days (void){
   cout << "Creating 'Days' object." << end;
   //initialize variables
   grandTotal = 0;

}

int Days::getGrandTotal ( void ) {
   
   vector<double> daysTotal;

}
