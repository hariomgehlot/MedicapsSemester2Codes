#include <iostream>
using namespace std;
class Student{
private:
int roll_no;
char name[20];
static char course[20];
public:
void getdata(){
    cout<<"Enter roll number of student : ";
    cin>>roll_no;
    cout<<endl;
    cout<<"Enter Name of student : ";
    cin>>name;
    cout<<endl;
}
void showdata(){
    cout<<"Name :"<<name<<endl;
    cout<<"Roll Number:"<<roll_no<<endl;
    cout<<"Course :"<<course<<endl;

}
};
char Student::course[20]="MCA";

int main(){

    Student students[2];
    for(int i=0;i<=1;i++){
        students[i].getdata();
    }
    for(int i=0;i<=1;i++){
        students[i].showdata();
    }

}