#include<iostream>
using namespace std;
int main(){
int arr[5];
int sum=0;
cout<<"Enter 5 members of array:";
for (int i =0;i<5;i++){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<"Sum is : "<<sum;
return 0;
}
