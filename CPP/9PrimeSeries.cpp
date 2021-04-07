#include<iostream>
using namespace std;
int IsPrime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0)
            return 0;
    }

return 1;
}

int main(){
cout<<"Enter the limit : ";
int limit=0;
cin>>limit;
 for(int i=2;i<=limit;i++){
    if(IsPrime(i))
        cout<<i<<" ";
 }

return 0;
}
