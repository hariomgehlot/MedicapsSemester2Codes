#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int PQueue[MAX];
int n=0;
int item=0;
void enqueue()
{

    if(n==MAX)
    {
        printf("\nQueue is Full!");
        return;
    }
    printf("\nEnter item value to be added : ");
    scanf("%d",&item);
    int i=n-1;
    while((i>=0) && (item<PQueue[i]))
    {
        PQueue[i+1]=PQueue[i];
        i--;
    }
    PQueue[i+1]=item;
    n++;
    printf("\nElement added\n");

}

void dequeue()
{
    int item;
    if(n==0)
    {
        printf("\nQueue is empty.");
        return;
    }
    item=PQueue[n-1];
    printf("\nElement %d deleted.",item);
    n--;
}


void traverse()
{
    int i;
    if(n==0)
    {
        printf("\nQueue is empty.");
        return;
    }
    for (i=0;i<n;i++)
        printf("%d\t",PQueue[i]);
    printf("\n");
}


void peek(){
  if(n==0)
    {
         printf("\nQueue is empty.");
        return;
    }else{
    item=PQueue[n-1];
    printf("\nPeeked item is : %d.",item);
}

}


void search(){
int big=0,j=0,low=0,high=0,mid=0,x=0,index;
if(n==0){
      printf("\nQueue is empty.");
        return;
}else{
  printf("\nEnter the element to be searched:\t");
     scanf("%d",&x);
     printf("\nSearching using binary search...\n");
    high=n-1;
     while(low<=high){
             mid=(low+high)/2;

            if(PQueue[mid]==x){
                index=mid;
                  printf("\nElement Found at : %d index. ",index+1);
                break;
            }
            if(x>PQueue[mid]){
                low=mid+1;
            }else{
                high=mid-1;

            }
            if(PQueue[mid]==x)
            index=mid;

     }
         if ( low>high)
            printf("\nElement Not Found!!!");


}

}
void main(){
    int choice=0;
    int item;
    while(1){
        printf("\n==========Primary Queue=========\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("6. Exit\n");


        printf("\nEnter Your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1 : enqueue();
                 break;
        case 2: dequeue();
                break;
        case 3: peek();
                break;
        case 4: traverse();
                break;
        case 5:search();
                break;
        case 6: exit(0);
        default : printf("\nInvalid Choice!!!");

        }
    }
}




