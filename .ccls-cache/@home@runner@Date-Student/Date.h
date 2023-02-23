//SPECIFICATION FILE
#ifndef DATE_H
#define DATE_H

class Date{

private: int month, day, year;
public:
        Date();                       //constructor
        Date( int m, int d, int y);
        Date( int m, int d);
        ~Date();                      //destructor
        void setMonth(int m);         //mutators
        void setDay(int d);
        void setYear(int y);

        int getMonth();               //accessor
        int getDay();
        int getYear();
};






#endif