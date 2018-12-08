#include "parking.h"
#ifndef UNTITLED3_FIGURES_H
#define UNTITLED3_FIGURES_H
#define Pi 3.1415926
typedef struct _Point{
    float x;float y;
}point;
class geometrical{
public:
    virtual ~geometrical();
    virtual void draw()=0;
protected:
    int side;float r;float g;float b;
};
class triangle: public geometrical{
public:
    triangle(point ptr1,point ptr2,point ptr3,float red,float green,float blue);
    void draw();
private:
    point p1;point p2;point p3;
};
class rectangle: public geometrical{
public:
    rectangle(point ptr1,point ptr2,float red,float green,float blue);
    void draw();
private:
    point p1;point p2;
};
class parallelogram: public geometrical{
public:
    parallelogram(point ptr1,point ptr2,point ptr3,float red,float green,float blue);
    void draw();
private:
    point p1;point p2;point p3;
};
class  trapezium: public geometrical {
public:
    trapezium(point ptr1,point ptr2,point ptr3,point ptr4,float red,float green,float blue);
    void draw();
private:
    point p1;point p2;point p3;point p4;
};
class circle: public geometrical{
public:
    circle(float radius,point center,float red,float green,float blue);
    void draw();
private:
    float R;point c;
};
class ellipse:public geometrical{
public:
    ellipse(point center,double angle,float lradius,float sradius,float red,float green,float blue);
    void draw();
private:
    double a;point p;float lr;float sr;
};
class halfCircle:public geometrical{
public:
    halfCircle(float radius,point center,float red,float green,float blue);
    void draw();
private:
    float R;point c;
};
class line:public geometrical{
public:
    line(point ptr1,point ptr2);
    void draw();
private:
    point p1;point p2;
};
