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

  printf("------Sorting array in ascending order--------\n");
   for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
            big=arr[i];
            arr[i]=arr[j];
            arr[j]=big;
            }
        }

   }
    printf("Sorted Array is:\n");
     for(i=0;i<size;i++){
            printf("%d\t",arr[i]);
     }


     printf("\nEnter the element to be searched:\t");
     scanf("%d",&x);
    high=size-1;
     while(low<=high){
             mid=(low+high)/2;

            if(arr[mid]==x){
                index=mid;
                  printf("\nElement Found at : %d index. ",index+1);
                break;
            }
            if(x>arr[mid]){
                low=mid+1;
            }else{
                high=mid-1;

            }
            if(arr[mid]==x)
            index=mid;

     }

         if ( low>high)
            printf("\nElement Not Found!!!");


}
