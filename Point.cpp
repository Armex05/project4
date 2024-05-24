#include <iostream>
#include <cmath>
using namespace std;
#include "Point.h"

Point Point::operator+(const Point& p){
    return Point(x + p.x, y + p.y);
}
Point Point::operator-(const Point& p){
    return Point(x - p.x, y - p.y);
}
Point Point::operator/=(int a) {
    if (x != 0){
        x /= a;
        y /= a;
    } else{
        cout <<"can not divide by 0\n";
    }
    return *this;
}
Point& Point::operator=(const Point& p){
    x = p.x;
    y = p.y;
    return *this;
}


bool Point::operator >=(const Point& p) {
    return (sqrt(x*x + y*y) >= sqrt(p.x*p.x + p.y*p.y));
}
void Point::set(){
    cout << "please enter x and y coordinates: \n";
    cin >> x >> y ;
}
void Point::get() const{
    cout << "the point has the x= " << x << " and the y= " << y << " coordinates\n";
}
bool Point::operator==(const Point& p) {
    if ((x == p.x) && (y==p.y)){
        return true;
    }
    return false;
}