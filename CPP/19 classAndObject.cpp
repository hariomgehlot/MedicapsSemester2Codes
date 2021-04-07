#include<iostream>
using namespace std;
class Employee{
public:
    int empid;
    int sal;
    char city[15];
    char designation[30];

void setdata(){
cout<<"Enter Employee ID:";
cin>>empid;
cout<<"Enter City name : ";
cin>>city;
cout<<"Enter salary : ";
cin>>sal;
cout<<"Enter Designation :";
cin>>designation;
}

void getdata(){
cout<<"Employee ID :"<<empid<<endl;
cout<<"Salary : "<<sal<<endl;
cout<<"City : "<<city<<endl;
cout<<"Designation : "<<designation<<endl;
}
};

int main(){

Employee details;
details.setdata();
cout<<endl<<endl;
details.getdata();
return 0;
}
