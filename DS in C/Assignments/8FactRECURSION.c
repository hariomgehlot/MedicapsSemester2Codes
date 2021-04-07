#include<stdio.h>
int fact(int);
void main(){
int num;
printf("Enter the number to calculate its factorial:\t");
scanf("%d",&num);
if(num<0){
    printf("Please enter a positive number.\n");
}
printf("Factorial of %d! is =%d",num,fact(num));
}
fact(int num){
    if(num>=1){
    return num*fact(num-1);
}
else{
  return 1;
}
}
