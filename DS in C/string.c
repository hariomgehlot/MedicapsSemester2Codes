#include<stdio.h>
void main(){
int i=0;
char arr[20] ="Hello, How Are You?";
for(i=0;arr[i]!='\0';i++){
    if(arr[i] == ' '){
        continue;
    }
    else{
        printf("%c" ,arr[i]);

    }

  }
}
