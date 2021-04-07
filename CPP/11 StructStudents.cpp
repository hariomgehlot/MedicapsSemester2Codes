#include<iostream>
using namespace std;
struct student{
float gradeInSems[4];
string name;
};
struct student s[5];
int main(){
for(int i=0;i<5;i++){
    cout<<"Enter name of student "<<i+1<<" :";
   cin>>s[i].name;
   fflush(stdin);
    for(int j=0;j<4;j++){
        cout<<"Enter grade of sem : "<<j+1<<" ";
        cin>>s[i].gradeInSems[j];
    }
    cout<<"==========================="<<"\n";

}
float avg=0.0;
cout<<"Details and Average of every student's marks"<<"\n";
for(int i=0;i<5;i++){
        cout<<"Student number : "<<i+1<<"\n";
        cout<<"Name : "<<s[i].name<<"\n";
            avg=0.0;
        for(int j=0;j<4;j++){
            avg+=s[i].gradeInSems[j];
        }
        cout<<"Average is :"<<avg/4<<"\n";

}
return 0;
}
