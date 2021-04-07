#include <iostream>
using namespace std;
class Student{
private:
static int counter;
char name[20];
static char course[20];
public:
void getdata(){
    cout<<"Enter Name of student : ";
    cin>>name;
    cout<<endl;
    counter++;
}
void showdata(){
    cout<<"Name :"<<name<<endl;
    cout<<"Course :"<<course<<endl;

}
static int getcount(){
    return counter;
}
};
char Student::course[20]="MCA";
int Student::counter=0;
int main(){

    Student students[2];
    for(int i=0;i<=1;i++){
        students[i].getdata();
    }
    for(int i=0;i<=1;i++){
        students[i].showdata();
    }
    cout<<"Object count is : "<<Student::getcount();

}