#include <iostream>
using namespace std;
#include "Date.h"
#include "Student.h"

Student::Student(string n, int m, int d, int y){
  name=n;
  bDate.setMonth(m);
  bDate.setDay(d);
  bDate.setYear(y);
}
Student::Student(string n, Date d){
  name=n;
  bDate=d;
}
Student::~Student(){
  
}
string Student:: getName(){    //accessors
           return name;
         }

Date Student:: getDate(){
           return bDate;
         }
void Student:: setName(string n){ //mutator
           name=n;
         }
void Student:: setDate(Date d){
           bDate=d;
         }

void Student::setDate2(int m, int d, int y){
          bDate.setMonth(m);
          bDate.setDay(d);
          bDate.setYear(y);
        }
         
         

         
         
         
         
        