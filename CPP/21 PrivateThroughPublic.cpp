#include <iostream>
using namespace std;
class Example{
private:
char name[20];
int age;
void getter(){
    cout<<"Name is :"<<name<<endl;
    cout<<"Age is :"<<age<<endl;
}
public:
void setter(){
    cout<<"Enter Name of the Person : ";
    cin>>name;
    cout<<"Enter Age of the Person : ";
    cin>>age;
    getter();
}
};


int main(){
Example obj;
obj.setter();
return 0;
}