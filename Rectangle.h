#ifndef POINT_CPP_RECTANGLE_H
#define POINT_CPP_RECTANGLE_H

#include "Point.h"

class Rectangle: public Point{
private:
    Point startPoint;
    int width,height;
public:
    Rectangle(Point p, int w = 0, int h = 0): startPoint(p), width(w), height(h){}
    Rectangle(Rectangle& r): startPoint(r.startPoint), width(r.width), height(r.height){}
    Rectangle operator +=(Rectangle&);
    Rectangle operator -=(Rectangle&);
    Rectangle operator /(Rectangle&);
    void set();
    void get();
    void collisionDetection(Rectangle&);
};
#endif
