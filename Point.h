#ifndef PROJECT4_POINT_H
#define PROJECT4_POINT_H


class Point {
protected:
    int y;
    int x;
public:
    Point(int x=0, int y=0): x(x), y(y){}
    Point(const Point& p): x(p.x), y(p.y){}
    Point operator +(const Point&);
    Point operator -(const Point&);
    Point operator /=(int);
    Point& operator=(const Point&);
    bool operator >=(const Point&);
    bool operator ==(const Point&);
    void set();
    void get() const;

};


#endif
