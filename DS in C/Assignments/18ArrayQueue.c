#include<stdio.h>
#define MAX 5
int enQueue(int);
int deQueue();
void display();
int isFull();
int isEmpty();
int peek();
static int front=-1,rear=-1;
int queue[MAX];
void main(){
int ch=0;
int item=0;
while(1){
    printf("\n\n*/*/*/*/*/*/*/*/*/*START MENU*/*/*/*/*/*/*/*/*/*/\n\n");
    printf("1.ENQUE\n2. DEQUE\n3. DISPLAY\n4. PEEK\n5. Check is Full()\n6. Check is Empty\n7. EXIT.\n");
    printf("Enter Your Choice=\t");
    scanf("%d",&ch);
    switch(ch){
    case 1: if(!isFull()){
            printf("Enter the item to add in QUEUE: ");
            scanf("%d",&item);
            if(enQueue(item)){
                printf("\n----ITEM IS ADDED!!!----\n");
            }
        }else{
            printf("------QUEUE IS OVERFLOW!! Can't Add More Data!!-------\n");
        }
        break;
    case 2: if(!isEmpty()){
            item = deQueue();
                printf("The removed item is : %d\n",item);
            }else{
            printf("\n-------The Queue is Empty Now!!------\n");
            break;
    case 3: display();
            break;
    case 4: if(!isEmpty()){
        item = peek();
        printf("\nThe front element is : %d\n",item);
        }else
        {
            printf("\n------The Queue is empty!!!!------\n");
        }
        break;
    case 5: if(isFull()){
            printf("\n-------The Queue is Full!!--------\n");
            }else{
            printf("\n-------The Queue is Not Full-------\n");
            }
            break;
    case 6: if(isEmpty()){
            printf("\n-------The Queue is Empty!!--------\n");
            }else{
            printf("\n-------The Queue is Not Empty-------\n");
            }
            break;
    case 7: printf("\n------Good BYE!!!!------");
            exit(0);
    default: printf("\n----Invalid Choice----\n");
    }
}
}
}
int isFull(){
if(rear==MAX-1)
    return 1;
else
    return 0;
}
int isEmpty(){
if(front==rear)
    return 1;
else
    return 0;
}
int enQueue(int item){
if(!isFull()){
    queue[rear]=item;
     rear++;
    return 1;
    }else{
        return 0;
    }
}
int deQueue(){
if(!isEmpty()){
        int item;
        item = queue[front];
        if(front == rear )
        front = rear =-1;
        else
        front++;
    return item;
}else{
        printf("\n----------Queue is Empty can't remove items!!!---------\n");
        return 0;
}
}
void display(){
    int i=0;
if(isEmpty()){
    printf("\n----------Queue is Empty---------\n");
}else{
    printf("Elements are :\n");
     for(i=front;i<rear;i++){
        printf("%d\t",queue[i]);
     }
     printf("\n");
}
}
int peek(){
 if(!isEmpty()){
    return queue[front];
 }else{
 return 0;
 }
}


