#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::get() {
    cout << "the rec has a height of: " << this->height << " and a width of: " << this->width << endl;
}
void Rectangle::set() {
    cout << "please enter the height and width of the rectangle: \n";
    cin >> height >> width;
}
Rectangle Rectangle::operator+=(Rectangle& r) {
    if (this->startPoint = r.startPoint){
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
    if (this->startPoint = r.startPoint){
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
    Point p((r.x + this->x)/2 , (r.y + this->y)/2);
    this->startPoint = p;
    if (r.height > this->height){
        height = r.height;
    }
    if (r.width > this->width){
        width = r.width;
    }
    return *this;
}
void Rectangle::collisionDetection(Rectangle& r) {
    if (((r.x - this->x)*(r.x - this->x) + (r.y - this->y)*(r.y - this->y)) >= (height*height + width*width) ){
        cout << "the rectangles have collision\n";
    }
    else{
        cout << "the rectangles don't have collision\n";
    }
}
