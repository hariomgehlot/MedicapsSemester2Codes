#include<stdio.h>
void main(){
int i,j,limit=0;
printf("Enter Limit: ");
scanf("%d",&limit);
for(i=1;i<=10;i++){
    for(j=1;j<=limit;j++){
        if(i==10)
        printf("%d * %d =%d  ",j,i,i*j);
        else
            printf("%d * %d =%d  ",j,i,i*j);

    }
    printf("\n");
}




}





