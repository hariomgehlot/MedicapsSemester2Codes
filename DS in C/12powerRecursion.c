#include<stdio.h>
int power(int,int);

void main(){
int num,pow;
printf("Enter the number to calculate its power to the second number:\t");
scanf("%d%d",&num,&pow);
if(num<0){
    printf("Please enter a positive number.\n");
    }

printf("%d ^ %d  is =%d",num,pow,power(num,pow));

}
power(int num,int pow){

    if(pow>1){
        return num*power(num,pow-1);
        }
    else{
        return num;
    }
}
