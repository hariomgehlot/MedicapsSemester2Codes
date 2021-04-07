#include<stdio.h>
void main()
 {
    int array[50],size,i,j,temp;
    printf("==========INSERTION SORT===========\n\n");

    printf("Enter size of the array :\t");
    scanf("%d",&size);

    printf("Enter %d elements in array :\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("\n\nElements before sorting are : \n\n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);

   //Insertion sort logic
    for(i=1;i<size;i++)
    {
        temp=array[i];
        j=i-1;
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }

    printf("\n\nElements in array after sorting are : \n\n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);

 }
