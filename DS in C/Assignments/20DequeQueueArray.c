#include<stdio.h>
#define MAX 5
#include<windows.h>
int dq[MAX]={0};
static int front=-1,rear=-1;
int isFull(){
if((front ==0 && rear == MAX-1) || (front==rear+1)) return 1;
else return 0;
}
int isEmpty(){
if(front==-1 && rear==-1) return 1;
else return 0;
}
void display(){
    int frnt=front;
    int rer=rear;
if(isEmpty()){
    printf("\nDeque is underflow!\n");
      Beep(1000,500);
}else if(frnt<=rer){
    printf("\nElements are=>\n");
            while(frnt<=rer){
                    Beep(500,100);
                    printf("%d ",dq[frnt]);
                        frnt++;
                }
                }else {
                    while(frnt<=MAX-1){
                        Beep(500,100);
                            printf("%d ",dq[frnt]);
                        frnt++;
                    }
                    frnt=0;
                    while(frnt<=rer){
                        Beep(500,100);
                        printf("%d ",dq[frnt]);
                        frnt++;
                    }
                    }
}
void enq_frnt(int item){
    if(isFull()){
        printf("\nDeque is overflow\n");
          Beep(1000,500);
        }else
            {
            if(front==-1 && rear==-1){
                    front=0;
                    rear=0;
            } else if(front==0){
                front=MAX-1;
                }else {
                        front--;
                    }
                        dq[front]=item;
                        printf("\nElement %d inserted at %d location.\n",item,front);
                          Beep(500,500);
                        }
                        display();
}
void enq_rear(int item){
 if(isFull()){
        printf("\nDeque is Oerflow!\n");
          Beep(1000,500);
        }else {
            if(front==-1 && rear==-1){
                    front=0;
                    rear=0;
            }else if(rear==MAX-1){
                rear=0;
                }else {
                       rear++;
                        }
                        dq[rear]=item;
                         printf("\nElement %d inserted at %d location.\n",item,rear);
                         Beep(500,500);
        }
        display();
}
int deq_frnt(){
    int item=0;
    if(isEmpty()){
        printf("\n Deque is underflow!\n");
          Beep(1000,500);
    }else{
         item = dq[front];
        if(front==rear){
            front=-1;
            rear=-1;
            } else {
                if(front == MAX-1){
                front =0;
                }else{
                    front++;
                        }
    }
    }
    printf("\nfrnt =%d, rear= %d",front,rear);
    return item;

}
int deq_rear(){
int item;
 if(isEmpty()){
    printf("\n Deque is underflow!\n");
      Beep(1000,500);
 }else{
      item=dq[rear];
    if(rear==front){
        front=-1;
        rear=-1;
        }else {
            if(rear==0){
              rear=MAX-1;
                }else{
                    rear--;
                    }
    }
 }
printf("\nfrnt =%d, rear= %d",front,rear);
return item;
}
void main(){
int choice=0;
int item=0;
while(1){
        item=0;
    printf("\n===============DeQue Menu==================\n");
    printf("\n1. Enqueue Front.\n2. Enqueue Rear.\n3. Dequeue Front.\n4. Dequeue Rear.\n5. Display.\n6. PeekFront.\n7. PeekRear\n8. IsEmpty.\n9. IsFull.\n10. Exit");
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice){
     case 1 : if(isFull()){
                    printf("\nDeque Overflow!\n");
                      Beep(1000,500);
                } else{
                    printf("Enter Data you want to insert : ");
                    scanf("%d",&item);
                    enq_frnt(item);
                }
                break;
    case 2 : if(isFull()){
                    printf("\nDeque Overflow!\n");
                      Beep(1000,500);
                } else{
                    printf("Enter Data you want to insert : ");
                    scanf("%d",&item);
                    enq_rear(item);
                }
                break;
    case 3:  if(isEmpty()){
                printf("\nDequeue is underflow!\n");
                  Beep(1000,500);
                }else{
                    item=deq_frnt();
                    printf("\nElement %d removed.\n",item);
                    }
                    break;
    case 4:  if(isEmpty()){
                printf("\nDequeue is underflow!\n");
                  Beep(1000,500);
                }else{
                    item=deq_rear();
                    printf("\nElement %d removed.\n",item);
                    }
                    break;
    case 5:     display();
                break;
    case 6:     if(isEmpty()){
                  printf("\nDequeue is underflow!\n");
                  Beep(1000,500);
                }else{
                    printf("\nThe Front Peeked item is %d.\n",dq[front]);
                }
                break;
     case 7:     if(isEmpty()){
                  printf("\nDequeue is underflow!\n");
                  Beep(1000,500);
                }else{
                    printf("\nThe Rear Peeked item is %d.\n",dq[rear]);
                }
                break;
    case 8:     if(isEmpty()){
                    printf("\nDeque is Empty!!");
                    }else{
                    printf("\nDeque is Not Empty!!");
                    }
                    break;
    case 9:      if(isFull()) printf("\nDeque is Full!\n");
                else printf("\nDeque is Not Full!\n");
                break;
    default : printf("\n Invalid choice!\n");
                Beep(1000,500);
                break;

    }

}
}

