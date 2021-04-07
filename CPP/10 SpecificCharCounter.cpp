#include<iostream>
#include<string.h>
using  namespace std;
int main(){
char strings[]="Priyanka";
cout<<"Enter character you want to count in String :"<<strings<<" ";
char choice;
cin>>choice;
int counter=0;
for(int i=0;i<strlen(strings);i++){
    if(strings[i]==choice)
        counter++;
}
cout<<"The character "<<choice<<" repeated in string : "<<strings<<" "<<counter<<" times.";
return 0;

}
