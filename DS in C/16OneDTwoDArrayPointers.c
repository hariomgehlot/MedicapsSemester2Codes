#include<stdio.h>
void main(){
int arr[2][4]={{1,2,3,4},{5,6,7,8}};
int brr[10]={1,2,3,4,5,6,7,8,9,10};
int i,j,*k;
int ROW=2,COL=4;
k=arr;
printf("\nElements of 2D array :\n ");
for(i=0;i<2;i++){
        for(j=0;j<4;j++){
        printf("%d ",*(k+i*COL+j));
        }
        printf("\n");
}
k=brr;
printf("\nElements of 1D array :\n ");
for(i=0;i<10;i++){
        printf("%d ",*brr+i);

}
}
