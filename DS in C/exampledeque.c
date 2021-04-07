#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int cqueue_arr[MAX] = {0};
void insertF(int);
void insertR(int);
void deleteF();
void deleteR();
void peek();
void isFull();
void isEmpty();
void display();
void Quit();
int front=-1;
int rear=-1;
int main()
{
    int choice,item;
    do
    {
        printf("\n\n........MENU.........\n");
        printf("1.insertF\n 2.insertR\n 3.deleteF\n 4.deleteR\n 5.peek\n 6.isFull\n 7.isEmpty\n 8.display\n 9.Quit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n enter the element to be insert\n");
            scanf("%d",&item);
            insertF(item);
            break;
            case 2:
            printf("\n enter the element to be insert\n");
            scanf("%d",&item);
            insertR(item);
            break;
            case 3:
            deleteF();
            break;
            case 4:
            deleteR();
            break;
            case 5:
            peek();
            break;
            case 6:
            isFull();
            break;
            case 7:
            isEmpty();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("\ninvalid input:\n");



        }
    }
    while(1);
    return 0;
}
void isFull()
{
    if(front==(rear+1)%MAX)
    {
        printf("\nqueue is full");
    }
    else
    printf("queue is not full\n");
}
void isEmpty()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("\n queue is not empty");
    }
}
void peek()
{
    if(front==-1)
    {
        printf("\n error");
    }
    else
    {
        int item=cqueue_arr[front];
        printf("\n peek item is:%d\n",item);
    }
}
void display()
{
    int front1=front;
    int rear1=rear;
    if(front==-1)
    {
    printf("\nDeque is underflow!\n");
}
else if(front1<=rear1){
    printf("\nElements are as follows:\n");
            while(front1<=rear1){
                    printf("%d ",cqueue_arr[front1]);
                        front1++;
                }
                }else {
                    while(front1<=MAX-1){
                            printf("%d ",cqueue_arr[front1]);
                        front1++;
                    }
                    front1=0;
                    while(front1<=rear1){
                        printf("%d ",cqueue_arr[front1]);
                        front1++;
                    }
                    }
}



void insertF(int item)
{

    if((front==0&&rear==MAX-1)||(front==rear+1))
    {
        printf("queue is full\n");
    }
    else
    {
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else if(front==0)
        {
            front=MAX-1;
        }
        else
        {
            front=front-1;
        }

        cqueue_arr[front]=item;
        printf("\n element  %d enter sucessfully\n",cqueue_arr[front]);
    }
}
void insertR(int item)
{

    if((front==0&&rear==MAX-1)||(front==rear+1))
    {
        printf("\n queue is full\n");
    }
    else
    {
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
        }
        else if(rear==MAX-1)
        {
            rear=0;
        }
           else
        {
            rear=rear+1;
        }

        cqueue_arr[rear]=item;
        printf("\n element enter sucessfully\n");
    }
}
void deleteF()
{
    int val;
    if(front==-1&&rear==-1)
    {
        printf("queue is underflow\n");
    }
    else
    {
        val=cqueue_arr[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==MAX-1)
        {
            front=0;
        }
        else
        {
            front=front+1;
        }
        printf("\n element %d deleted successfully!\n",val);
        return;
    }

}
void deleteR()
{
    int val;
    if(front==-1&&rear==-1)
    {
        printf("queue is underflow\n");
    }
    else
    {
        val=cqueue_arr[rear];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            rear=MAX-1;
        }else{
            rear=rear-1;

        }
          printf("\n element %d deleted successfully!\n",val);
        return;
    }
}
