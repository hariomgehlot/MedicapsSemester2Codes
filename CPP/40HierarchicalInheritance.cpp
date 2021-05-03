#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    string name;
    string Fname;
    student(string NAME,string  FNAME){
        name=NAME;
        Fname=FNAME;
    }
};

class MCA :public student{
    public:
    char course[20];
    float avg;
    float chem;
    float math;
    void info(){
        avg=(chem+math)/2;
        cout<<name<<" "<<Fname<<endl;
        cout<<course<<endl;
        cout<<"Average :"<<avg<<endl;
    }
    MCA(string name,string Fname,float chems,float maths):student(name,Fname){
        chem=chems;
        math=maths;
        strcpy(course,"MCA");
    }
};


class MBA:public student{
    public:
    char course[20];
    float avg;
    float management;
    float accounting;
    void info(){
        avg=(management+accounting)/2;
        cout<<name<<" "<<Fname<<endl;
        cout<<course<<endl;
        cout<<"Average :"<<avg<<endl;
        
    }
    MBA(string name,string Fname,float manage,float account):student(name,Fname){
        strcpy(course,"MBA");
        management=manage;
        accounting=account;
    }
};

class MA :public student{
    public:
    char course[20];
    float avg;
    float civics;
    float humanities;
    void info(){
        avg=(civics+humanities)/2;
        cout<<name<<" "<<Fname<<endl;
        cout<<course<<endl;
        cout<<"Average :"<<avg<<endl;
        
    }
    MA(string name,string Fname,float civic,float humnts):student(name,Fname){
        civics=civic;
        humanities=humnts;
        strcpy(course,"MA");
    }
};

int main(){
    std::string  name="Gaurav Verma";
   std::string fname="Shantilal";
    MCA mca1 = MCA(name,fname,56.9f,43.5f);
    name="Shyam";
    fname="Ram";
    MCA mca2=MCA(name,fname,80.2f,53.23f);
     name="Shivani";
    fname=" ";
    MBA mba1=MBA(name,fname,543.6f,33.8f);
    name="Shyam";
    fname="Madanlal";
    MBA mba2=MBA(name,fname,543.6f,33.8f);

    name="Himanshu";
    fname=" ";
    MA ma1=MA(name,fname,86.6f,43.5f);
    name="Muskan";
    fname="Mukesh";
    MA ma2=MA(name,fname,88.3f,22.5f);

    mca1.info();
    mca2.info();
    mba1.info();
    mba2.info();
    ma1.info();
    ma2.info();
    return 0;

    



}