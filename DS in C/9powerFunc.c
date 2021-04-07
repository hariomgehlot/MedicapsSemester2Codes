
#include<stdio.h>
int power(int,int);

void main(){
int num,pow;
printf("Enter the number to calculate its power to the second number:\t");
scanf("%d%d",&num,&pow);
if(num<0){
    printf("Please enter a positive number.\n");
    }

printf("%d ^ %d is =%d",num,pow,power(num,pow));

}
power(int num,int pow){
    int ans=1,i=0;
        for(i=0;i<pow;i++){
                ans*=num;
        }
        return ans;
    }

