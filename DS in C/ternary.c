#include<stdio.h>
#include<conio.h>
void main(){
  int number;
  printf("Enter the number: \n");
  scanf("%d",&number);


  number%2==0?printf("\nEven."):printf("\nOdd.");
}
