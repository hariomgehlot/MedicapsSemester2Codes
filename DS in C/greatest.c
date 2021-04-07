#include<stdio.h>
#include<conio.h>
 void main(){
     int a,b,c,greatest;
     printf("Enter Three numbers: \n");
     scanf("%d%d%d",&a,&b,&c);
     greatest =(a>b&&a>c?a:b>a&&b>c?b:c);
     printf("Greatest is = %d:",greatest);
     getch();
 }

