#include<iostream>
using namespace std;

//no return no argument
void fact(void){
cout<<"Enter number to calculate factorial :";
int num;
cin>>num;
if (num>0){
        int fact=1;
    cout<<"factorial of "<<num<<" is ";
    for(int i =num;num>0;num--){
        fact*=num;
}
cout<<fact<<endl;
}else{
cout<<"Enter positive number only!";
}
}


//return but no argument
int factorial(void){
cout<<"Enter number to calculate factorial :"<<endl;
int num;
cin>>num;
int fact=1;
if (num>0){
    cout<<"factorial of "<<num<<" is ";
    for(int i =num;num>0;num--)
        fact*=num;
        return fact;
}else{
cout<<"Enter positive number only!";
}

return -1;
}

//no return but argument
void fact(int num){
    if (num>0){
        int fact=1;
    cout<<"factorial of "<<num<<" is ";
    for(int i =num;num>0;num--)
        fact*=num;
        cout<<fact;
}else{
    cout<<"Enter positive number only!";
    }
}
//return with argument
int factorial(int num){
if (num>0){
        int fact=1;
    cout<<"factorial of "<<num<<" is ";
    for(int i =num;num>0;num--){
        fact*=num;
}
return fact;
}else{

cout<<"Enter positive number only!";
return -1;

}
}

int main(){
int number;
cout<<"factorial by no argument and no return value :"<<endl;
fact();

cout<<"factorial by no argument and return value :"<<endl;
cout<<factorial()<<endl;

cout<<"factorial by argument and no return value :"<<endl;
cout<<"Enter number to calculate factorial :";
cin>>number;
fact(number);
cout<<endl;

cout<<"factorial by argument and return value :"<<endl;
cout<<factorial(number);
return 0;
}
