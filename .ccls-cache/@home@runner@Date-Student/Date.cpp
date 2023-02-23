// IMPLEMENTATION FILE
#include <iostream> 
using namespace std;
#include "Date.h"


Date::Date(){  //non-argument constructor
  cout<<"Hello, this is constructor 1"<<endl;
  month=1;
  day=1;
  year=2023;
}
Date::Date( int m, int d, int y){
  cout<<"Hello, this is constructor 2"<<endl;
  month=m;
  day=d;
  year=y;
} 
Date::Date( int m, int d){
  month=m;
  day=d;
  year=2000;
}
Date:: ~Date(){    //destructor
  cout<<"\nThe destructor is running";
}
void Date:: setMonth(int m){    //mutators
  if(m>0)
  month=m;
  else month=1;
}         
void Date:: setDay(int d){
  day=d;
}

void Date:: setYear(int y){
  year=y;
}
int Date::getMonth(){
  return month;
}
int Date::getDay(){
  return day;
}
int Date::getYear(){
  return year;
}



        
       
        
        
        
