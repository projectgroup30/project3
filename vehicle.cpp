#include "parking.h"
#include <iostream>
#include "time.h"
using namespace std;
vehicle:: vehicle(){
    type=0;
    position[0]=0;position[1]=0;
    t1=0;m=0;t2=0;r=0;g=0;b=0;
};
vehicle :: vehicle(float red,float green,float blue,int vtype,int time,int method){
    type=vtype;
    position[0]=0;
    position[1]=0;
    t1=time;
    m=method;
    t2=0;
    r=red;g=green;b=blue;
}
void vehicle::changeColor(float red,float green,float blue){
    r=red;g=green;b=blue;
}
void vehicle :: findEmptySlot(slot *slot){
    while(true){
        if (slot->getState()==0){
            position[0]=slot->getFloor();
            position[1]=slot->getPosition();
            break;
        }
        *slot=*(slot+1);
    }
}
