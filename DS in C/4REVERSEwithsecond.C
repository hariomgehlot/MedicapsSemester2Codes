//WAP to reverse an array.

#include<stdio.h>
#include<conio.h>
int main(){                                      //start of main
 int arr[100]={0},i,j=0,size,brr[100]={0};		//initialising required vars and arrays
	//clear previous output
 printf("Enter the size of the array");
 scanf("%d",&size);							//scanning size of array var.
	for(i=0;i<size;i++){					
		scanf("%d",&arr[i]);					//scanning all elements of array	
		}
printf("Original Array is:\n");
for(i=0;i<size;i++){
	printf("%d ",arr[i]);		//printing the original array.	
	}
 for(i=size-1;i>=0;i--){		//loop to traverse the original array from last element to first .
	brr[j]=arr[i];		//storing last element of original array to first position in second array 
	j++;						// incrementing the position of seconf array
	}

printf("\nReversed array is=\n");
for(i=0;i<size;i++)
	{
	 printf("%d ",brr[i]);		//printing the second array as it is reversed.
	 }
getch();
return 0;

}

