#include<stdio.h>
#include<conio.h>

int main()
{						//start of main
	int n,i,sum=0,j,temp;		//declaration of required vars
		//clearing last output
	int arr[50],brr[50];		//intialising the array
	printf("Enter number of elements:");
	scanf("%d",&n);		//scanning the size of array var
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		//scanning all elements of array
        	}
        	printf("1st Array is :\n");
        	for(i=0;i<n;i++)
		{
		printf("%d ",arr[i]);
        	}


        for(i=0;i<n;i++){
            brr[i]=arr[i];
        }
        		printf("\n\n2nd Array is :\n");
        	for(i=0;i<n;i++)
		{
		printf("%d ",brr[i]);
        	}

}
