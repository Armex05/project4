#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;

void Rectangle::get() {
    cout << "the rec has a height of: " << this->height << " and a width of: " << this->width << " the start point is:\n";
    startPoint.get();
}
void Rectangle::set() {
    cout << "please enter the height and width of the rectangle: \n";
    cin >> height >> width;
    cout << "please enter the start point x and y: \n";
    startPoint.set();
}
Rectangle Rectangle::operator+=(Rectangle& r) {
    if (this->startPoint == r.startPoint){
        if (r.height > this->height){
            height = r.height;
        }
        if (r.width > this->width){
            width = r.width;
        }
    } else{
        cout << "they're not in a same start point...";
    }
    return *this;
}
Rectangle Rectangle::operator-=(Rectangle& r) {
    if (this->startPoint == r.startPoint){
        if (r.height < this->height){
            height = r.height;
        }
        if (r.width < this->width){
            width = r.width;
        }
    } else{
        cout << "they're not in a same start point...";
    }
    return *this;
}
Rectangle Rectangle::operator /(Rectangle& r){
    startPoint = startPoint + r.startPoint;
    startPoint /= 2;

    height = height/r.height;
    width = width/r.width;

    return *this;
}
void Rectangle::collisionDetection(Rectangle& r) {
    Point temp(sqrt(width*width), sqrt(height*height));
    startPoint = startPoint - r.startPoint;
    if (temp >= startPoint){
        cout << "the rectangles have collision\n";
    }
    else{
        cout << "the rectangles don't have collision\n";
    }

}