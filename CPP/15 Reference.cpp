#include<iostream>
using namespace std;
int main(){
int j=101;
int& k=j;
cout<<"Value of j is : "<<j<<"\n"<<"Value of k is "<<k<<"\n";
k=k+j;
cout<<"Incremented value of j is "<<j <<"\n"<<"Incremented value of k is "<<k;
return 0;

}
