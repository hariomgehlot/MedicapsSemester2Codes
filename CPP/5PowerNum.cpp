#include<iostream>

using namespace std;
int main(){
int num,pow,ans=1;
cout<<"Enter the number to its power :";
cin>>num>>pow;
for(int i=1;i<=pow;i++){
    ans*=num;
}
cout<<num<<"^"<<pow<<" is : "<<ans;
return 0;
}
