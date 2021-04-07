//WAP to insert a new element into array.

#include<stdio.h>
#include<conio.h>
int main(){  //start of main
	int x,i,n,arr[100]={0},pos;
	printf("Enter the Size of the array\n");
	scanf("%d",&n);	//scanning the size var.
		printf("Enter the %d elements of the array\n",n);
	for(i = 0 ; i<n;i++){
		scanf("%d",&arr[i]); //scanning the array elements.
		}
	printf("The Original array is\n ");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]);//printing the original array.
		}
	printf("\nEnter the position of new element");
	scanf("%d",&pos);//scanning the position var
	printf("Enter the new element");
	scanf("%d",&x);//scanning the new element.
	n++; //inncreasing the size of array to overcome outofbound
	for(i=n-1;i>=pos-1;i--){
	    arr[i]=arr[i-1]; //rearranging all elements to create a space for new element.
		 }
	arr[pos-1]=x; // Inserting new element at new place which is empty

	 printf("the modified array is \n");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]); //printing the new array
		}

		printf("\nEnter the place to remove element : ");
		scanf("%d",&pos);

		for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
		}
		n--;
		 printf("the modified array is \n");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]); //printing the new array
		}

	getch();
	return 0;
	} // end of main
