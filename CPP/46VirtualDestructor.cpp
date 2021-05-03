#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base Constuctor"<<endl;
    }
  virtual  ~Base(){
        cout<<"Base Destructor"<<endl;
    }
};


class Derived:public Base{
    public:
    Derived(){
        cout<<"Constructor of Derived Class"<<endl;
    }
    ~Derived(){
        cout<<"Destructor of Derived Class"<<endl;
    }
    
};
int main(){
    /*Making base class destructor virtual guarantees\
     that the object of derived class is destructed properly*/
    Derived *dr =new Derived();
    Base *BasePointer=dr;
    delete BasePointer;

    return 0;

}