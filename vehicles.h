#include "parking.h"
#include "figures.h"
#ifndef UNTITLED3_VEHICLES_H
#define UNTITLED3_VEHICLES_H
class cars:public vehicle{
public:
    cars(float length,float radius,float height,point center,float red,float green,float blue);
    void draw();
    void paint();
    void moveRight();
    void moveLeft();
    void moveForward();
    void moveBackward();
    void turnRight();
    void turnLeft();
private:
    float l;float R;float h;point ptr;geometrical *shape[5];
};
class plate:public vehicle{
public:
    plate(point center1,float lradius,float sradius,float red,float green,float blue,float radius);
    void draw();
    void paint();
    void spin();
    void moveRight();
    void moveLeft();
    void moveForward();
    void moveBackward();
    void turnRight();
    void turnLeft();
private:
    float lr;float sr;float angle;float R;point p1;geometrical *shape[2];
};
class spaceCraft:public vehicle{
    spaceCraft(point center,float radius,float foot,float length,float red,float green,float blue);
    void draw();
    void paint();
    void zoom(flo)
    void zoomin();
    void zoomout();
    void moveRight();
    void moveLeft();
    void moveForward();
    void moveBackward();
    void turnRight();
    void turnLeft();
private:
    point ptr;float R;float f;geometrical *shape[5];float angle;float l
};
