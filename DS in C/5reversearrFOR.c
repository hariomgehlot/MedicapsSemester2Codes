#include<stdio.h>
#include<conio.h>
void main(){
int a[10],i,j,temp=0,size=0;
        printf("Enter size of array upto 10 :\n");
        scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array is : \n");
     for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }

   for(i=0,j=size-1 ;i<j;i++,j--){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }

 printf("\nReversed Array is : \n");
     for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    }
