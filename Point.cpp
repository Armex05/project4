#include <iostream>
using namespace std;
#include "Point.h"

Point operator+(Point p1,Point p2){
    Point temp;
    temp.x = p1.x + p2.x;
    temp.y = p1.y + p2.y;
    return temp;
}
Point operator-(Point p1, Point p2){
    Point temp;
    temp.x = p1.x - p2.x;
    temp.y = p1.y - p2.y;
}
Point Point::operator/=(int a) {
    if (x != 0){
        x /= a;
        y /= a;
    }
}
bool Point::operator=(Point p1) {
    bool a;
    int dis = x*x + y*y;
    int argDis = (p1.x)*(p1.x) + (p1.y)*(p1.y);
    if (dis == argDis){
        a = true;
    } else{
        a = false;
    }
    return a;
}
void Point::operator >=(Point p1) {
    int dis = x * x + y * y;
    int argDis = (p1.x) * (p1.x) + (p1.y) * (p1.y);
    if (dis >= argDis) {
        cout << "the object is greater or equal than the given arg\n";
    } else {
        cout << "the object is not greater or equal than the given arg\n";
    }
}
void Point::set(){
    cout << "please enter x and y coordinates: \n";
    cin >> x >> y ;
}
void Point::get() {
    cout << "the point has the x= " << x << " and the y= " << y << " coordinates\n";
}