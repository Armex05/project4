#ifndef PROJECT4_ADDRESS_H
#define PROJECT4_ADDRESS_H
#include "iostream"
using namespace std;

class Address {
private:
    string country;
    string city;
    string street;
public:
    Address(string country,string city,string street);
    Address();
    friend ostream& operator <<(ostream&,Address&);
    friend istream& operator >>(istream&,Address&);
    void get();
    void set();
};


#endif
