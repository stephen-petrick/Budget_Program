#ifndef TIME_OBJECTS_H
#define TIME_OBJECTS_h

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
