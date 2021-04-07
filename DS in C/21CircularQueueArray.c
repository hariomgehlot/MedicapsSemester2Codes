
#include <stdio.h>

#define SIZE 5

int Cqueue[SIZE];
int front = -1, rear = -1;

int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
    return 1;
  return 0;
}

int isEmpty() {
  if (front == -1) return 1;
  return 0;
}


void enQueue(int element) {
  if (isFull())
    printf("\n Queue Overflow! can't add more items. \n");
  else {
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    Cqueue[rear] = element;
    printf("\n Item %d is inserted!!!!!\n"  , element);
  }
}

int deQueue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is underflow!!!! can't remove item !! \n");
    return (-1);
  } else {
    element = Cqueue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    }

    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element is %d \n", element);
    return (element);
  }
}

void display() {
  int i;
  if (isEmpty())
    printf(" \n Queue is underflow!!\n");
  else {
    printf("\n Front ===> %d ", front);
    printf("\n items ==> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", Cqueue[i]);
    }
    printf("%d ", Cqueue[i]);
    printf("\n Rear===> %d \n", rear);
  }
}



void peek(){
if(isEmpty()){
    printf("\n Queue is Full!!!!\n");
}
else{
    printf("\n Front item is -> %d\n",Cqueue[front]);

}
   }

void main() {
  int choice=0;
  int item;

  while(1){

         printf("\n++++++++++++CIRCULAR QUEUE MENU+++++++++++++\n");
  printf("1. ENQUEUE\n2. DEQUEUE\n3.DISPLAY\n4. PEEK\n5. ISFULL?\n6. ISEMPTY?\nENTER YOUR CHOICE-\t");
  scanf("%d",&choice);
    switch(choice){


    case 1 : if(!isFull()){
                printf("Enter The Element to add=\t");
                scanf("%d",&item);
                enQueue(item);
            }
            else{
                printf("\nQueue is full!!!\n");
            }
            break;

    case 2 : if(!isEmpty()){
                item=deQueue();
                printf("\n%d is deQueued!!!!\n",item);
                }else{
                printf("\n Queue is Empty!!!!!\n");
            }

        break;

    case 3 : display();
            break;

    case 4: if(!isEmpty())
            peek();
            else
                printf("\n QUEUE IS EMPTY!!!!\n");
            break;
    case 5: if(isFull())
            printf("\n Queue is Full!!!\n");
            else
            printf("\n Queue is Not Full!!!\n");
            break;


    case 6: if(isEmpty())
            printf("\n Queue is Empty!!!\n");
            else
            printf("\n Queue is Not Empty!!!\n");
            break;


    default : printf("\n----INCORRECT CHOICE-------\n");
            break;


    }


  }





}
