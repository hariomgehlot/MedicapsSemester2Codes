#include<stdio.h>
void main()
 {
    int array[50],size,i,j,flag=1,temp;
    printf("=======BUBBLE SORT========\n");
    printf("Enter size of array :\n");
    scanf("%d",&size);
    printf("Enter %d elements of the array :\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("\n\nElements before sorting are : \n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);
        //BUBBLE SORT LOGIC

         for(i=0;i<size-1&&flag==1;i++)
        {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
    }

    printf("\n\nElements after sorting are : \n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);

 }

