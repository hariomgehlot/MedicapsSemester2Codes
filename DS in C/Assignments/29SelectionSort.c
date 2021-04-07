#include <stdio.h>
int main()
{
int array[20], n, i, j, pos, temp;
printf("Enter Size of the array: ");
scanf("%d", &n);
printf("Enter %d items : ", n);
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
for(i = 0; i < n - 1; i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(array[pos] > array[j])
pos=j;
}
if(pos != i)
{
temp=array[i];
array[i]=array[pos];
array[pos]=temp;
}
}
printf("Sorted items are :");
for(i = 0; i < n; i++)
printf("%d ", array[i]);
return 0;
}
