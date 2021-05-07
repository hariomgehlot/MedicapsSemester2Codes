#include<iostream>
using namespace std;

class First{
    public:
    First(){
        cout<<"First constructor "<<endl<<endl;
    }
    ~First(){
        cout<<"First Desctuctor"<<endl<<endl;
    }
};

class Second:public First{
    public:
    Second(){
        cout<<"Second constructor "<<endl<<endl;
    }
    ~Second(){
        cout<<"Second Desctuctor"<<endl<<endl;
    }
};


class Third:public Second{
    public:
    Third(){
        cout<<"Third constructor "<<endl<<endl;
    }
    ~Third(){
        cout<<"Third Desctuctor"<<endl<<endl;
    }
};



int main(){
Third th;
return 0;
}
