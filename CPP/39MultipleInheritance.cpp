#include<iostream>
using namespace std;
class A{
    public:
    int a;
};

class B{
    public:
    int b;
};

class C :public A, public B{
    public:
    int c;
    int max(){
        int max;
        if(a>b){
            max=a;
        }
        else{
            max=b;
        }
        if (c>max){
            max=c;
        }
        return max;
    }
};

int main(){
    C c;
    c.a=100;
    c.b=50;
    c.c=200;
 cout<<c.max()<<endl;
}