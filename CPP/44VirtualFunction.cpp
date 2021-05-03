#include<iostream>
using namespace std;
class Base{
public:
int num;
void virtual show(){ //if we remove this virtual keyword BasePointer will access this function instead of subclass's
    cout<<"Num of Base class is shown :"<<num<<endl;
}
};


class inherit :public Base{
public:
void show(){
    cout<<"Num of Inherited class is shown."<<num<<endl;
}
};

int main(){
    // now in dynamic polymorphism if we want to 
    //access a member funtion which is defined in inherited
    //class we use address of the inherited class object

    Base *BasePointer;
   // BasePointer->num=9;
    //BasePointer->show();
    //uncommenting this will create exception 

    //to access the data of subclass with the help of 
   //direct accessing static 
    inherit inheritOBJ;
    inheritOBJ.num=7;
    inheritOBJ.show();
     //base class pointer we do this
    BasePointer =&inheritOBJ;
    BasePointer->show();

return 0;

}