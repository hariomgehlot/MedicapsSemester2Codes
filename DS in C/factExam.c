#include<stdio.h>
int fact(int);
void main(){
int i,n,ans=0;
printf("Enter a number to find Factorial:\t");
scanf("%d",&n);
if(n>0){
   ans= fact(n);
   printf("%d",ans);
}else
{
 printf("Enter number greater than 0");
}
}
fact(int n ){
    int fact =1,i=0;
    printf("Factorial is : ");
for(i=n;i>=1;i--){
    if(i>1)
        printf("%d*",i);
        else
            printf("%d=",i);
    fact*=i;
}
return fact;
}


