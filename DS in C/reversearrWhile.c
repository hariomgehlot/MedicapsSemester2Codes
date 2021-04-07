#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,temp,size;
    printf("enter number of element");
    scanf("%d",&size);
    printf("enter elements of an array\n");
    for(i=0;i<size;i++);
    scanf("%d",&a[i]);
    i=0;
    j=size-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
     printf("\n reversed array is\n");
     for(i=0;i<size;i++)
     printf("%d",a[i]);
     getch();
     return 0;
}
