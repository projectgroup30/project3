#include "parking.h"
#include <iostream>
#include <glut.h>
using namespace std;
slot :: slot(int floor,int position){
    location[0]=floor;
    location[1]=position;
    state=0;
}
void slot :: park(){
    if (state==1 || state==2){
        cout<<"The slot has been parked or reserved!";
        return;
    }
    state=1;
}
void slot :: reserve(){
    if (state==1 || state==2){
        cout<<"The slot has been parked or reserved!";
        return;
    }
    state=2;
}
void slot :: leave(){
    if (state==0){cout<<"Wrong action!";return;}
    state=0;
}
void slot :: cancelReserve(){
    if (state==0){cout<<"Wrong action!";return;}
    state=0;
}
int slot :: getState(){
    return state;
}
int slot :: getFloor(){
    return location[0];
}
int slot :: getPosition(){
    return location[1];
}
