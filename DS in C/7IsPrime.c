#include<stdio.h>
int prime(int num){
int i,m,flag=0;
m=num/2;
for(i=2;i<=m;i++){

    if(num%i==0){
    printf("\nNot Prime!!\n");
    flag=1;
    break;
    }
}
if(flag==0){
    printf("\nPrime!\n");
    return 0;
}
}

void main(){
int num;
printf("Enter the  number:\t");
scanf("%d",&num);
prime(num);

 }

