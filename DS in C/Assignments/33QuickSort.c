#include<stdio.h>
void quicksort(int array[25],int first,int last){
   int i, j, middle, temp;

   if(first<last){
      middle=first;
      i=first;
      j=last;

      while(i<j){
         while(array[i]<=array[middle]&&i<last)
            i++;
         while(array[j]>array[middle])
            j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }

      temp=array[middle];
      array[middle]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1);
      quicksort(array,j+1,last);

   }
}

int main(){
   int i, size, array[25];

   printf("Enter the size of the array: ");
   scanf("%d",&size);

   printf("Enter %d elements: ", size);
   for(i=0;i<size;i++)
      scanf("%d",&array[i]);

   quicksort(array,0,size-1);

   printf("Sorted elements are : ");
   for(i=0;i<size;i++)
      printf(" %d",array[i]);

   return 0;
}
