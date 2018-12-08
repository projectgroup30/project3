#include "parking.h"
#include <iostream>
#include <glut.h>
using namespace std;
ticket :: ticket(int time,int method){
    t1=time;m=method;t2=0;
}
void ticket :: getExit(int time){
    t2=time;
}
int ticket :: calculatePrice(){
    int total;
    total=((t2-t1)-(t2-t1)%1)*Price;
    return total;
}
void ticket :: printEnterTicket(){
    cout<<"***Your entering time is "<<t1<<".\n***"<<endl;
}
void ticket :: printExitTicket(){
    cout<<"***Your exiting time is "<<t2<<".***\n"<<endl;
    cout<<"***Please pay "<<calculatePrice()<<" yuan.***\n"<<endl;
}
