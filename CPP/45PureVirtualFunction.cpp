#include<iostream>
using namespace std;
class Base{
    public:
  virtual  void PureVirtual()=0;
};

class derived1 :public Base{
    public:
    int a,b,sum;
    void virtual PureVirtual()=0;
};
class Derived:public derived1{
    public:
    void PureVirtual(){//overriding function
    //if we don't override this function Derived class remains abstract
    //and we can't declare objects of that
        sum=a+b;
    }
};
int main(){
    Derived dr;
    dr.a=7;
    dr.b=6;
    dr.PureVirtual();
    cout<<dr.sum<<endl;
    return 0;

}