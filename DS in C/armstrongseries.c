#include<stdio.h>
void main(){
int limit=0,temp=0,temp1=1,i,sum=0;
printf("Enter Limit : ");
scanf("%d",&limit);
for(temp=1;temp<=limit;temp++){
        sum=0;
        temp1=temp;
while(temp1!=0){
    i=temp1%10;
    sum+=i*i*i;
    temp1/=10;
}
if(sum==temp){
    printf("%d ",sum);
}
}
}

