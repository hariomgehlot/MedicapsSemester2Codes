#include <iostream>
using namespace std;

class Marks
{
public:
	int rollNumber;
	string name;
    int marks;
};

class Physics : public Marks
{
public:
};

class Chemistry : public Marks
{
public:
};

class Mathematics : public Marks
{
public:
};

int main()
{
	int num;
	cout<<"Enter the number of students: ";
	cin>>num;

	Physics physics_studs[num];
    Chemistry chem_studs[num];
    Mathematics math_studs[num];

    for (int i=0; i<num; i++)
    {
        physics_studs[i].rollNumber=math_studs[i].rollNumber=chem_studs[i].rollNumber=i+1;
		physics_studs[i].marks=rand()%100;
        chem_studs[i].marks=rand()%100;
        math_studs[i].marks=rand()%100;
	}

    cout << "The total marks of each student(In Physics, Chemistry and Mathematics): \n";

	for(int i=0; i<num; i++)
    {
		cout<<"\nRoll number   : "<<physics_studs[i].rollNumber<<endl;
		cout<<"Marks in Physics       :"<< physics_studs[i].marks<<endl;
		cout<<"Marks in Chemistry     :"<<chem_studs[i].marks<<endl;
		cout<<"Marks in Mathematics   :"<< math_studs[i].marks<<endl;
	}

    cout<<"\n\nAverage marks of class in all subjects:"<<endl;
    cout<<"Total strength of class: "<<num<<endl;
    int sum_phy=0;
    int sum_chem=0;
    int sum_math=0;
    for(int i =0;i<num;i++)
    {
        sum_phy+=physics_studs[i].marks;
        sum_chem+=chem_studs[i].marks;
        sum_math+=math_studs[i].marks;
    }

    cout<<"\nTotal marks in Physics     :"<<sum_phy<<endl;
    cout<<"Average in Physics         :"<<sum_phy/num<<endl<<endl;
    cout<<"Total marks in Chemistry   :"<<sum_chem<<endl;
    cout<<"Average in Chemistry       :"<<sum_chem/num<<endl<<endl;
    cout<<"Total marks in Mathematics :"<<sum_math<<endl;
    cout<<"Average in Mathematics     :"<<sum_math/num<<endl;
	return 0;
}