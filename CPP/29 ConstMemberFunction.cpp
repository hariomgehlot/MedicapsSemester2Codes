#include<iostream>
using namespace std;
class ConstantExample{
int number;
public:
int getnumber() const{
  //  number=100;  //after adding const to definition of function this assignment operation won't execute;
    return number;
}


};

int main(){
    ConstantExample ex;
    cout<<"Number is :"<<ex.getnumber()<<endl;
    return 0;
}