#include <iostream>
using namespace std;
#include "Date.h"
#include "Student.h"

int main() {

  Date d1;
  Date d2(10,20,2000);
  Date d3(05,25);   
  Student s1("Peter", 12,10,198);
    cout<<"\n\nStudent s1 name= "<<s1.getName();
    cout<<"\n\nStudent s1 birth month= "<<s1.getDate().getMonth();
    cout<<"\n\nStudent s1 birth day= "<<s1.getDate().getDay();
    cout<<"\n\nStudent s1 birth year= "<<s1.getDate().getYear();
}