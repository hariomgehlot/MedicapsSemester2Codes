#include<iostream>
using namespace std;
int main(){
    char ch;
cout<<"Enter a character : ";
cin>>ch;
if(ch>='a' && ch<='z'  || ch>='A' && ch<='Z'){
    if(ch=='A' || ch=='a' || ch=='E'|| ch=='e' || ch=='I'|| ch=='I' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
        cout<<ch<<" is a Vowel.";
    else
        cout<<ch<<" is a Consonant";
    }else if(ch>='0' && ch<='9'){
        cout<<ch<<" is just a number.";
    }else{
        cout<<ch<<" is just a character.";
    }
return 0;
}
