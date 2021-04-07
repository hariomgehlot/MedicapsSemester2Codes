#include<iostream>
#include<string.h>
using namespace std;
int main(){
char string1[100];
int arr[26]={0};
int ARR[26]={0};
cout<<"Enter String:";
cin>>string1;

for(int i =0;i<strlen(string1);i++)
{
    int pos=0;
    if(string1[i]>='a' && string1[i]<='z'){
        pos = string1[i]-'a';
        arr[pos]++;
    }
  if(string1[i]>='A' && string1[i]<='Z'){
     pos = (string1[i]-'A');
        ARR[pos]++;
    }

}

for(int j=0;j<=25;j++){
        if(j%5==0)
        cout<<"\n\n";
    cout<<(char)(j+'a')<<"="<<arr[j]<<"\t";

}
cout<<"\n";
for(int j=0;j<=25;j++){
    if(j%5==0)
        cout<<"\n\n";
    cout<<(char)(j+'A')<<"="<<ARR[j]<<"\t";
}
return 0;
}
