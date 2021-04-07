#include<stdio.h>
#include<conio.h>
  void main(){
   int a,b;
   printf("Enter Two Numbers: \n");
   scanf("%d%d",&a,&b);
   printf("Without Swapping : %d %d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("Swapped = %d %d ",a,b);
   getch();

  }
