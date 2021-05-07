#include<iostream>
using namespace std;

class Shape{
    public:
    float width,height;
    Shape(float Width,float Height){
        cout<<"Hi, i am a Shape!"<<endl;
        width=Width;
        height=Height;
    }
};


class Rectangle:public Shape{
    public:
    Rectangle(float width,float Height):Shape(width,Height){
        cout<<"My name is Rectangle"<<endl;
    }
    void area(){
        cout<<"My area is :"<<height*width<<endl;
    }
};


class Triangle:public Shape{
    public:
    Triangle(float width,float Height):Shape(width,Height){
        cout<<"My name is Triangle"<<endl;;
    }
    void area(){
        cout<<"My area is :"<<(width*height)*1/2<<endl;
    }
};



int main(){
    Rectangle rect=Rectangle(4.5f,8.3f);
    rect.area();
    Triangle tri =Triangle(34.7f,74.0f);
    tri.area();
    return 0;
}