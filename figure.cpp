#include "figures.h"
#include <GL/glut.h>
#include <math.h>
geometrical::~geometrical(){};
triangle::triangle(point ptr1, point ptr2, point ptr3, float red, float green, float blue) {
    p1=ptr1;p2=ptr2;p3=ptr3;r=red; g=green; b=blue;side=3;
}
void triangle::draw(){
    glColor3f(r,g,b);glBegin(GL_TRIANGLES);
    glVertex2f(p1.x,p1.y);glVertex2f(p2.x,p2.y);glVertex2f(p3.x,p3.y);glEnd();
}
rectangle::rectangle(point ptr1, point ptr2, float red, float green, float blue) {
    p1=ptr1;p2=ptr2;r=red; g=green; b=blue;side=4;
}
void rectangle::draw(){
    glColor3f(r,g,b);glBegin(GL_QUADS);
    glVertex2f(p1.x,p1.y);glVertex2f(p2.x,p1.y);glVertex2f(p2.x,p2.y);glVertex2f(p1.x,p2.y);glEnd();
}
parallelogram::parallelogram(point ptr1, point ptr2, point ptr3, float red, float green, float blue) {
    p1=ptr1;p2=ptr2;p3=ptr3;r=red; g=green; b=blue;side=4;
}
void parallelogram::draw(){
    glColor3f(r,g,b);glBegin(GL_QUADS);
    glVertex2f(p1.x,p1.y);glVertex2f(p2.x+p3.x-p1.x,p2.y+p3.y-p1.y);glVertex2f(p2.x,p2.y);glVertex2f(p3.x,p3.y);glEnd();
}
trapezium::trapezium(point ptr1, point ptr2, point ptr3, point ptr4, float red, float green, float blue) {
    p1=ptr1;p2=ptr2;p3=ptr3;p4=ptr4;r=red; g=green; b=blue;side=4;
}
void trapezium::draw(){
    glColor3f(r,g,b);glBegin(GL_QUADS);
    glVertex2f(p1.x,p1.y);glVertex2f(p2.x,p2.y);glVertex2f(p3.x,p3.y);glVertex2f(p4.x,p4.y);glEnd();
}
circle::circle(float radius,point center,float red,float green,float blue){
    R=radius;c=center;r=red; g=green; b=blue;side=0;
}
void circle::draw(){
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i<100; ++i){
        glVertex2f(c.x-R*cos(2*Pi/100*i),c.y-R*sin(2*Pi/100*i));
    }
    glEnd();
}
ellipse ::ellipse(point center, double angle, float lradius, float sradius, float red, float green, float blue) {
    p=center;a=angle;lr=lradius;sr=sradius;r=red;g=green;b=blue;
}
void ellipse :: draw(){
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    double length;
    for(int i=0;i<100;++i){
        length=sqrt((lr*cos(2*Pi/100*i))*(lr*cos(2*Pi/100*i))+(sr*sin(2*Pi/100*i))*(sr*sin(2*Pi/100*i)));
        glVertex2f(p.x+length*cos(2*Pi/100*i+a),p.y+length*sin(2*Pi/100*i+a));
    }
    glEnd();
}
halfCircle::halfCircle(float radius,point center,float red,float green,float blue){
    R=radius;c=center;r=red; g=green; b=blue;side=0;
}
void halfCircle::draw(){
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(int i=0; i<100; ++i){
        glVertex2f(c.x-R*cos(Pi/100*i),c.y-R*sin(Pi/100*i));
    }
    glEnd();
}
line ::line(point ptr1, point ptr2) {
    p1=ptr1;p2=ptr2;r=0;g=0;b=0;
}
void line :: draw(){
    glColor3f(r,g,b);
    glBegin(GL_LINES);
    glVertex2f(p1.x,p1.y);
    glVertex2f(p2.x,p2.y);
    glEnd();
}
