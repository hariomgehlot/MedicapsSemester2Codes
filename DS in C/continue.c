#include<stdio.h>
void main(){
int i=0;
char arr[20] ={1,2,3,4,5,6,7,8,9,10};
while(i<10){
    if(arr[i] == 5){
            i++;
        continue;
    }
    else{
        printf("%d" ,arr[i]);

    }
    i++;

  }
}
