#include<iostream>
using namespace std;
class Two;
class One{
public:
int num;
    One(int number){
        num=number;
    }
friend int greatest(One one,Two two);
};

class Two{
public:
int num;
Two(int num1){
    num=num1;
}
friend int greatest(One one,Two two);
};

int greatest(One one,Two two){
    if(one.num>two.num)
        return one.num;
    else
        return two.num;

}


int main(){
    int num1,num2;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    One one(num1);
    Two two(num2);
cout<<"Greater is :"<<greatest(one,two)<<endl;


}
