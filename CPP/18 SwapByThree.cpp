#include<iostream>
using namespace std;
void callByValue(int a,int b){

int c;
cout<<"Call by value:"<<endl;
cout<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"Value of A is "<<a<<endl;
cout<<"Value of B is "<<b<<endl;
}

void callByAddress(int *a, int *b){
cout<<"Call by Address : "<<endl;
cout<<endl;
int *c;
c=a;
a=b;
b=c;
}

void callByReference(int& a, int&b){
cout<<"Call By Reference :"<<endl;
a=a+b;
b=a-b;
a=a-b;
}


int main(){
cout<<"Enter Two Numbers : ";
int a,b;
cin>>a>>b;
callByValue(a,b);
callByAddress(&a,&b);
cout<<"Value of A is "<<a<<endl;
cout<<"Value of B is "<<b<<endl;
cout<<endl;
callByReference(a,b);
cout<<endl;
cout<<"Value of A is "<<a<<endl;
cout<<"Value of B is "<<b<<endl;

}
