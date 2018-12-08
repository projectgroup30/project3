#include "vehicles.h"
#include <GL/glut.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;

cars :: cars(float length, float radius, float height, point center, float red, float green, float blue) {
    l=length;R=radius;h=height;ptr=center;r=red;g=green;b=blue;
    point p1,p2,p3,p4,p5,p6,p7,p8,p9;
    p1={ptr.x-l/2,ptr.y-h/2};p2={ptr.x+l/2,ptr.y+h/2};
    shape[0]=new rectangle(p1,p2,r,g,b);
    p3={ptr.x-l/4,ptr.y-h/2-4/5*R};
    shape[1]=new circle(R,p3,r,g,b);
    p4={ptr.x+l/4,ptr.y-h/2-4/5*R};
    shape[2]=new circle(R,p4,r,g,b);
    p5={ptr.x-l/2,ptr.y};p6={ptr.x-3*l/4,ptr.y-h/2};
    shape[3]=new triangle(p1,p5,p6,r,g,b);
    p7={ptr.x+l/2,ptr.y};p8={ptr.x+l/2,ptr.y-h/2};p9={ptr.x+3*l/4,ptr.y-h/2};
    shape[4]=new triangle(p7,p8,p9,r,g,b);
}
void cars :: draw(){
    for (int i=0;i<5;i++){shape[i]->draw();}
}
void cars :: paint(){
    srand(time(NULL));
    r=rand()/RAND_MAX;g=rand()/RAND_MAX;b=rand()/RAND_MAX;
}
plate ::plate(point center1, float lradius, float sradius, float red, float green, float blue, float radius) {
    p1=center1;lr=lradius;sr=sradius;r=red;g=green;b=blue;R=radius;angle=0.3;
    point p2;
    shape[0]=new ellipse(p1,angle,lr,sr,r,g,b);
    p2={p1.x-sin(angle)*3/5*R,p1.y+cos(angle)*3/5*R};
    shape[1]=new circle(R,p2,r,g,b);
}
void plate :: draw(){
    for (int i=0;i<2;i++){shape[i]->draw();}
}
void plate :: paint(){
    srand(time(NULL));
    r=rand()/RAND_MAX;g=rand()/RAND_MAX;b=rand()/RAND_MAX;
}
spaceCraft :: spaceCraft(point center, float radius, float foot,float length, float red, float green, float blue) {
    ptr=center;R=radius;f=foot;r=red;g=green;b=blue;angle=0.1f;l=length;
    point p1,p2,p3,p4,p5,p6,p7,p8;
    shape[0]=new halfCircle(R,ptr,r,g,b);
    p1={ptr.x-R*sin(angle),ptr.y+R*cos(angle)};p2={p1.x,p1.y+l};
    shape[1]=new line(p1,p2);
    p3={ptr.x+R*sin(angle),ptr.y+R*cos(angle)};p4={p3.x,p3.y+l};
    shape[2]=new line(p3,p4);
    p5={ptr.x-3/4*R,ptr.y};p6={ptr.x-1/4*R,ptr.y-f};
    shape[3]=new rectangle(p5,p6,r,g,b);
    p7={ptr.x+3/4*R,ptr.y};p8={ptr.x+1/4*R,ptr.y-f};
    shape[4]=new rectangle(p7,p8,r,g,b);
}
void spaceCraft::draw(){
    for (int i=0;i<5;i++){shape[i]->draw();}
}
void spaceCraft :: paint(){
    srand(time(NULL));
    r=rand()/RAND_MAX;g=rand()/RAND_MAX;b=rand()/RAND_MAX;
}
