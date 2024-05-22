//
// Created by Armex on 5/22/2024.
//
#include <string>
#include <cctype>
#include "Person.h"

Person::Person(string name, string id, string address) {
    if (validate(id)){
        this->name = name;
        this->id = id;
        this->address = address;
    }
    else{
        cout <<"invalid id";
    }

}
Person::Person(Person& p){
    name = p.name;
    id = p.id;
    address = p.address;
}
void Person::get() {
    cout << "the name you're looking for is: " << this->name << " with id of " << this->id << " in " << this->address;
}
void Person::set() {
    cout << "enter the name, id, and address: \n";
    cin >> name >> id >> address;
}
ostream& operator <<(ostream& strm,Person& p){
    strm << "the name is: " << p.name << " with the id od " << p.id << "and the address of: " << p.address;
    return strm;
}
istream& operator >>(istream& strm, Person& p){
    cout << "please enter the name, id, and address you want: \n";
    strm >> p.name >> p.id >> p.address;
    return strm;
}
Person Person::operator=(const Person& p) {
    name = p.name;
    id = p.id;
    address = p.address;
    return *this;
}
bool Person::validate(const string& str) {
    if (str.length() < 8 || str.length() > 10) {
        return false;
    }

    if (str.substr(0, 2) < "84" || str.substr(0, 2) > "99") {
        return false;
    }

    for (int i = 2; i < str.length() - 5; i++) {
        if (!isalpha(str[i])) {
            return false;
        }
    }

    for (int i = str.length() - 5; i < str.length(); i++) {
        if (!isdigit(str[i]) || (str[i] < '0' || str[i] > '4') && (str[i] < '6' || str[i] > '9')) {
            return false;
        }
    }

    return true;
}
