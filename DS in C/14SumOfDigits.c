#include<stdio.h>
int sumofD(int dig){
 static   int sum=0;
if(dig>0){
    sum+=dig%10;
    sumofD(dig/10);
}
return sum;
}

void main(){
int digit;
printf("\nEnter the digit: ");
scanf("%d",&digit);
printf("\nSum is : %d",sumofD(digit));
}
