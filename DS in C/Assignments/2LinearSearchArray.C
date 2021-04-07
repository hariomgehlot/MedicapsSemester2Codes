//WAP to Search an Element in an array.
#include<stdio.h>
#include<conio.h>
int main(){		//start of main
int i,s,temp=0;		//declaring the required vars
int arr[]={2,5,6,7,8,65,90};   //initialize array	//clearing the last output
printf("Enter an element to search in array");
scanf("%d",&s);		//scanning the element to search
for(i=0;i<7;i++){		//loop to traverse array
	if(s==arr[i]){ //condition to match when the query met the array elements
	    printf("Element found at %d index",i);
	    temp=1;		//flag to check that condition is met or not
		}
		}
if(temp==0){
	printf("element not found");  //flag is zero means element not found
}

getch();
return 0 ;
}//end of main

