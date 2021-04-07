#include<stdio.h>
#include<stdlib.h>

void main(){
int *arr,i,n=0,max=0,j,temp=0;
printf("\nEnter the number of elements : ");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("\nEnter %d Elements : ",n);
if(arr!=NULL)
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("\nArray is : ");
         for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nGreatest Element is :  ");
    for(i=0;i<n;i++){
            for(j=0;j<i;j++){
        if(arr[i]>arr[j]){
            temp=arr[j];        //sorting in ascending order
            arr[j]=arr[i];
            arr[i]=temp;
        }

    }
    }

    printf("%d",arr[0]);

}
