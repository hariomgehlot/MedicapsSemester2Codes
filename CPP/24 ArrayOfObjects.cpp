#include<iostream>
using namespace std;
class Employee{
public:
    int empid;
    int sal;
    char city[15];
    char name[30];

void setdata(){
cout<<"Enter Employee ID:";
cin>>empid;
cout<<"Enter name :";
cin>>name;
cout<<"Enter City name : ";
cin>>city;
cout<<"Enter salary : ";
cin>>sal;
}

void getdata(){
cout<<"name : "<<name<<endl;
cout<<"Employee ID :"<<empid<<endl;
cout<<"Salary : "<<sal<<endl;
cout<<"City : "<<city<<endl;
}
};

int main(){

Employee details[10];
int size;
cout<<"Enter number of objects (upto 10):";
cin>>size;

for(int i =0;i<size;i++)
{
    details[i].setdata();
    cout<<endl<<endl;
    details[i].getdata();
}
return 0;
}
