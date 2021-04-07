#include<stdio.h>
void main(){
int i=0,n=0,j=0;
printf("Enter the lines of triangle:\t");
scanf("%d",&n);
for(i=0;i<=n;i++){
        for(j=0;j<n-i+10;j++) printf(" ");
    for(j=0;j<i;j++){
        printf("* ");
    }
    printf("\n");
}
}
