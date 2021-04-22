#include<stdio.h>
void prime(int num){
int i,flag=0;
for(i=2;i*i<=num;i++){

    if(num%i==0){
    printf("\nNot Prime!!\n");
}else
{
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

