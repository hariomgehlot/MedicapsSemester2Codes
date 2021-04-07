#include<stdio.h>
void main(){
int *a,*b,c,d,sum=0;
printf("\nEnter Two numbers to add : ");
scanf("%d%d",&c,&d);
a=&c;
b=&d;
sum=*a+*b;
printf("\nSum is : %d",sum);
}
