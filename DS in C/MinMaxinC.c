#include<stdio.h>
#include<conio.h>
void main(){
int arr[10],i=0,size=0,big=0,j=0,low=0,high=0,mid=0,x=0,index;
printf("Enter Size of the array: up to 10:\t");
scanf("%d",&size);
printf("Enter %d elements of array:\n",size);
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
   for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
            big=arr[i];
            arr[i]=arr[j];
            arr[j]=big;
            }
        }
   }
    printf("\nSecond highest Element is : %d",arr[size-2]);

}
