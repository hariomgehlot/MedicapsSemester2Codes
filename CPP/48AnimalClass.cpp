#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    int age;
   void set_value(string Name,int Age){
       name=Name;
       age=Age;
    }
};

class Dolphin:public Animal{
    public:
    string color,place;
    void set_dolphin(string name,int age,string Color,string Place){
        set_value(name,age);
        color=Color;
        place=Place;
    }
    void show(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Place:"<<place<<endl;
    }
};

class Zebra:public Animal{
    public:
    string color,place;
    void set_Zebra(string name,int age,string Color,string Place){
        set_value(name,age);
        color=Color;
        place=Place;
    }
    void show(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Place:"<<place<<endl;
    }
};


int main(){
    Dolphin dolphin;
    dolphin.set_dolphin("Doggo",56,"Grey","Water");
    Zebra Zebra;
    Zebra.set_Zebra("Shera",20,"Golden Tabby","Land");


        dolphin.show();
        Zebra.show();

        return 0;
    }
