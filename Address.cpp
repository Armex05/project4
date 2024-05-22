#include "Address.h"
Address::Address(string country, string city, string street) {
    this->city = city;
    this->country = country;
    this->street = street;
}
ostream& operator <<(ostream& strm,Address& address){
    strm << "the address is: " << address.country << ", " << address.city << ", " << address.street;
    return strm;
}
istream& operator >>(istream& strm,Address& address){
       cout << "enter your country, city and street: \n";
       strm >> address.country >> address.city >> address.street;
    return strm;
}

void Address::get() {
    cout << "the address is: " << this->country << ", " << this->city << ", " << this->street;
}
void Address::set() {
    cout << "enter your country, city and street: \n";
    cin >> this->country >> this->city >> this->street;
}