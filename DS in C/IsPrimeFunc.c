#include<stdio.h>
int prime(int num){
int i,m,flag=0;
m=num/2;
for(i=2;i<=m;i++){
    if(num%i==0){
    flag=1;
    break;
    }
}
if(flag==0){
    printf("%d ",num);
    return 0;
}
}
void main(){
int i=0,num;
printf("Enter the limit: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
prime(i);
}

