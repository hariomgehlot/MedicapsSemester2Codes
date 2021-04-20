#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    void square(int a=10){
        cout<<"Square of "<<a<< " is "<<a*a<<endl;
    }
};

int main(){
Base obj;
obj.square(8);
obj.square();//no value is passed so it will take default value which is 10
return 0;
}