#include<iostream>
using namespace std;

int main(){
int num,dup;
cout<<"Enter a number to check palindrome or not :";
cin>>num;
dup=num;
int rev=0;
while(num!=0){
    int dig = num%10;
    rev=rev*10+dig;
    num/=10;
}
if(rev==dup)
    cout<<dup<<" is palindrome.";
else
    cout<<dup<<" is not palindrome.";

    return 0;
}
