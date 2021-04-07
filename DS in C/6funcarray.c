#include<stdio.h>
#include<conio.h>
int function1(int [],int);
void main(){
int a[10],i,size=0,sum=0;
        printf("Enter size of array upto 10 :\n");
        scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
        }
    sum = function1(a,size);
    printf("\n Modified  Array is : \n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
      }
    printf("\n sum is : %d ",sum);
}

function1(int arr[],int size){
    int i =0,sum=0;
     for(i=0;i<size;i++){
        arr[i]+=3;
        sum+=arr[i];
     }
    return sum;


}

