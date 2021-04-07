#include<iostream>
#include<string>
using namespace std;
union employee{
int id;
double salary;
char comp_name[20];
char name[30];
char designation[40];
};


int main(){
union   employee emp;
cout<<"Enter ID number : ";
cin>>emp.id;
cout<<"ID: "<<emp.id<<endl;
cout<<"Enter name :";
cin>>emp.name;
cout<<"Name: "<<emp.name<<endl;
cout<<"Enter Company name: ";
cin>>emp.comp_name;
cout<<"Company Name: "<<emp.comp_name<<endl;
cout<<"Enter Designation: ";
cin>>emp.designation;
cout<<"Designation : "<<emp.designation;
cout<<"Enter Salary: ";
cin>>emp.salary;
cout<<"Salary: " <<emp.salary<<endl;

cout<<"======================================"<<"\n";

return 0;
}
