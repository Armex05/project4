#include <iostream>
using namespace std;
#include "Address.h"
#include "Person.h"
#include "Employee.h"
#include "Point.h"
#include "Rectangle.h"

int main() {
    Point p1(1,5);
    Point p2(5,10);
    Point p3 = p1 + p2;
    p3.get();

    Rectangle r(p1,5,1);
    Rectangle r1(p1,3,2);
    r += r1;
    r.get();
    cout << "------------------\n";

    Rectangle r2(p2,1,1);
    r1.get();
    r2.get();

   // r2/r1;

    r2.collisionDetection(r1);
    return 0;
}
