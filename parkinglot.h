#ifndef UNTITLED3_PARKING_H
#define UNTITLED3_PARKING_H
#define Price 5;
#include <iostream>
#include <glut.h>
class ticket{
public:
    ticket(int time=0,int method=0);
    void getExit(int time);
    int calculatePrice();
    void printEnterTicket();
    void printExitTicket();
protected:
    int t1;int m;int t2;
};
class slot{
public:
    slot(int floor,int position);
    void park();
    void reserve();
    void leave();
    void cancelReserve();
    int getState();
    int getFloor();
    int getPosition();
private:
    int state;int location[2];
};
class vehicle:public ticket{
public:
    vehicle();
    vehicle (float red,float green,float blue,int vtype=0,int time=0,int method=0);
    void findEmptySlot(slot *slot);
    void changeColor(float red,float green,float blue);
    /*virtual void move()=0;*/
protected:
    int type;int position[2];float r;float g;float b;
};
#endif //UNTITLED3_PARKING_H
