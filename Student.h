#include <iostream>
#ifndef STUDENT_H
#define STUDENT_H
#include "Date.h"
using namespace std;

class Student{
private: string name;
         Date bDate; //composition
public : Student(string n, int m, int d, int y);
         Student(string n, Date d);
         ~Student();

         string getName(); //accessors
         Date getDate();
         void setName(string n);//mutator
         void setDate(Date d);
         void setDate2(int m, int d, int y);
};



#endif