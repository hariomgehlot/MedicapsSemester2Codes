#include<iostream>
using namespace std;

class Student{
public:
    char name[20];
    int roll;
    char branch[20];
    void getinfo();
    void putinfo();
};

void Student::getinfo(){
cout<<"Enter Name of Student : ";
cin>>name;
cout<<"Enter Branch:";
cin>>branch;
cout<<"Enter Roll Number: ";
cin>>roll;
}


void Student::putinfo(){
cout<<"Name : "<<name<<endl;
cout<<"Roll : "<<roll<<endl;
cout<<"Branch : "<<branch<<endl;
}

int main(){
Student details;
details.getinfo();
cout<<endl<<endl;
details.putinfo();
return 0;
}
