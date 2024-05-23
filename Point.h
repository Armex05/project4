#ifndef PROJECT4_POINT_H
#define PROJECT4_POINT_H


class Point {
protected:
    int y;
    int x;
public:
    Point(int x=0, int y=0): x(x), y(y){}
    Point(Point& p): x(p.x), y(p.y){}
    friend Point operator +(Point,Point);
    friend Point operator -(Point, Point);
    Point operator /=(int);
    bool operator=(Point);
    void operator >=(Point);
    void set();
    void get();

};


#endif
