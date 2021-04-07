#include<stdio.h>
#include<conio.h>
int main()
{						//start of main
	int n,i,sum=0,j,temp;		//declaration of required vars
	int arr[50];		//intialising the array
	printf("Enter number of elements:");
	scanf("%d",&n);		//scanning the size of array var
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		//scanning all elements of array
		}

     for(i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("\na[%d] = %d is even.",i,arr[i]);
            else
                printf("\na[%d] = %d is odd.",i,arr[i]);
     }
	return 0;
}
