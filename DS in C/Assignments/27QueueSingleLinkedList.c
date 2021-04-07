#include<stdio.h>
#include<stdlib.h>

struct slist{
    int data;
    struct slist *next;
};
typedef struct slist node;
node* start =NULL;

node* getNode(){
    int item;
    node *ptr =(node *)malloc(sizeof(node));
    if(ptr!=NULL){
printf("\nEnter data to add in the queue: ");
scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    return ptr;
    } else{
            printf("\nError!! Memory can't be allocated.\n");
    }
}

int nodeCounter(node* start){
int counter=0;
while(start!=NULL){
    start=start->next;
    counter++;
}
return counter;
}



void enque(){
 node* newnode = getNode();
 node* temp;
    if(start ==NULL) {
            start=newnode;
         printf("\nElement is Queued!!\n");
    }
    else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            printf("\nElement is Queued!!\n");
    }
}

void traverse(){
    node* temp;
 if(start==NULL) printf("\n The Queue is Empty!!!\n");
    else{
            temp=start;
            do{
                printf(" %d",temp->data);
                if(temp->next!=NULL) printf("->");
                temp=temp->next;
            }while(temp!=NULL);
    }
}


void deque(){
    node *temp;
if(start ==NULL) {
         printf("\nQueue is Empty!!\n");
    }
    else{
            temp=start;
            start=start->next;
            free(temp);
            printf("\nElement is deleted!!\n");
    }

}

void search(){
    int key,flag=0;
    node* temp =start;
    int ctr=1;
if(start ==NULL) {
         printf("\nQueue is Empty!!\n");
    }
    else{
            printf("\nEnter data to search : ");
            scanf("%d",&key);

        while(temp!=NULL){
            if(temp->data==key){
                flag=1;
                break;
            }
            ctr++;
            temp=temp->next;
        }
        if(flag){
            printf("\nElement %d Found at : %d location ",key,ctr);
        }else{
        printf("\nElement not Found!!!");

        }
}
}

void peek(){
if(start==NULL){
      printf("\nQueue is Empty!!\n");
    }
    else{

        printf("\nPeeked item is : %d", start->data);
    }
}


void main(){
    int choice=0;
    int item;
    while(1){
        printf("\n==========Queue via Linked List=========\n");
        printf("1. Enque\n");
        printf("2. Deque\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Search\n");

        printf("\nEnter Your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1 : enque();
                 break;
        case 2: deque();
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
