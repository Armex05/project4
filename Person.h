#ifndef PROJECT4_PERSON_H
#define PROJECT4_PERSON_H
#include "iostream"
using namespace std;

class Person {
private:
    string name, id, address;

public:
    Person(string,string,string);
    Person(Person&);
    friend ostream& operator <<(ostream&,Person&);
    friend istream& operator >>(istream&,Person&);
    Person operator = (const Person&);
    void get();
    void set();
    bool validate(const string&);
};


#endif
