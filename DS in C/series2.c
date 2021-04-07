#include<stdio.h>
int factorial(int num){
    int ans=1,i=0;
        for(i=1;i<=num;i++){
             ans*=i;
        }
        return ans;
    }
int power(int num,int pow){
    int ans=1,i=0;
        for(i=0;i<pow;i++){
                ans*=num;
        }
        return ans;
    }
void main(){
int n,i=0,sum=0;
printf("\nEnter the length of series: ");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i+=2){
    sum+=pow(n,i)/factorial(i);
    if(i<n-1)
   printf("(x^%d/%d!)+",i,i);
   else
       printf("(x^%d/%d!)",i,i);
}
printf("\nSum: %d\n",sum);
}
