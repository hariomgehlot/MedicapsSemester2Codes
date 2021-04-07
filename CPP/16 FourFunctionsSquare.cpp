#include<iostream>
using namespace std;

//no return no argument
void sqr(void){
cout<<"Enter number to calculate square :";
int num;
cin>>num;
cout<<"Square of "<<num<<" is "<<num*num<<endl;
}
//return but no argument
int square(void){
cout<<"Enter number to calculate square :"<<endl;
int num;
cin>>num;
return num*num;
}
//no return but argument
void sqr(int num){
cout<<"Square of "<<num<<" is "<<num*num<<endl;
}
//return with argument
int square(int num){
return num*num;
}

int main(){
int number;
cout<<"Square by no argument and no return value :"<<endl;
sqr();

cout<<"Square by no argument and return value :"<<endl;
cout<<square()<<endl;

cout<<"Square by argument and no return value :"<<endl;
cout<<"Enter number to calculate square :";
cin>>number;
sqr(number);

cout<<"Square by argument and return value :"<<endl;
cout<<square(number);
return 0;
}
