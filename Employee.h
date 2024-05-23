#ifndef PROJECT4_EMPLOYEE_H
#define PROJECT4_EMPLOYEE_H
#include <iostream>
#include "Address.h"

using namespace std;
class Employee {
public:
    string name,id;
    Address address;
    Employee(string,string,Address,int,int,int,int);
    Employee();
    Employee(Employee&);
    friend ostream& operator <<(ostream&,Employee&);
    friend istream& operator >>(istream&,Employee&);
    Employee operator = (const Employee&);
    void set();
    void get();
    bool validate(const string&);
    void calculateSalary();
    void efficiency();
private:
    int hourWork,salaryPerHour,workToDo,workDone;
};


#endif
