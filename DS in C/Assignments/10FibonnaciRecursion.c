#include<stdio.h>
void printFib(int n){
static int fib,a=1,b;
if(n>0){
fib=a+b;
b=a;
a=fib;
printf("%d ",fib);
printFib(n-1);
}
}
void main(){
int n;
printf("Enter the number of elements to generate: ");
scanf("%d",&n);
printFib(n);
}
