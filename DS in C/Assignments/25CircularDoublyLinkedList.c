#include<stdio.h>
#include<stdlib.h>

struct dlist{
    int data;
    struct dlist *next;
    struct dlist *prev;
};
typedef struct dlist node;
node* start =NULL;

node* getNode(){
    int item;
    node *ptr =(node *)malloc(sizeof(node));
    if(ptr!=NULL){
printf("\nEnter data to add in the list: ");
scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    ptr->prev=NULL;
    return ptr;
    } else{
            printf("\nError!! Memory can't be allocated.\n");
    }
}

int nodeCounter(node* ptr){
int counter=0;
while(ptr!=start){
        counter++;
     ptr=ptr->next;
}
counter++;
return counter;
}


void insertAtBeg(){
    node* newnode = getNode();
    if(start ==NULL) {
            start=newnode;
            newnode->next=start;
            newnode->prev=start;
         printf("\nElement is inserted!!\n");
    }
    else{
            newnode->next=start;
            newnode->prev=start->prev;
            start->prev->next=newnode;
            start->prev=newnode;
            start=newnode;
            printf("\nElement is inserted!!\n");
    }
}

void insertAtEnd(){
 node* newnode = getNode();
    if(start==NULL){
            start=newnode;
            newnode->next=start;
            newnode->prev=start;
         printf("\nElement is inserted!!\n");
            }else{
                newnode->next=start;
                newnode->prev=start->prev;
                start->prev->next=newnode;
                start->prev=newnode;
            printf("\nElement is inserted!!\n");
    }
}

void insertAtPos(){
int pos,ctr;
node* temp ;
node * newnode;
if(start!=NULL){
temp=start;
printf("\nEnter the position : ");
scanf("%d",&pos);
ctr=nodeCounter(start->next);
printf("\nCounter is : %d",ctr);
if(pos > 1 && pos < ctr){
        newnode = getNode();
        ctr=1;
    while(ctr<pos-1){
        temp =temp->next;
        ctr++;
    }

      newnode->next= temp->next;
      newnode->prev=temp;
      temp->next->prev=newnode;
      temp->next=newnode;
       printf("\nElement is inserted!!\n");
} else{
printf("\nEnter Correct Position !!\n");
}
}else{
printf("\nList is Empty!!\n");

}
}

void traverse(){
    node* temp;
 if(start==NULL) printf("\n The list is Empty!!!\n");
    else{
            temp=start;
            do{
                printf(" %d",temp->data);
                if(temp->next!=start) printf("->");
                else printf("->Start");
                temp=temp->next;
            }while(temp!=start);
    }
}

void traverseReverse(){
    node *temp;
    temp=start;
if(start==NULL) printf("\n The list is Empty!!!\n");
    else{
    while(temp->next!=start){
        temp=temp->next;
    }
     printf("start->");
    while(temp!=start){
            printf("%d-> ",temp->data);
            temp=temp->prev;
    }
    if(temp!=NULL){
        printf("%d",temp->data);
    }
}
}

void deleteAtBeg(){
    node *temp;
    temp=start;
if(start ==NULL) {
         printf("\nList is Empty!!\n");
    }
    else if(temp->next==start){
            start=NULL;
                free(temp);
                 printf("\nElement is deleted!!\n");
            } else {
                    start->prev->next=start->next;
                    //start->prev->prev=start->prev;
                    start->next->prev=start->prev;
                    start=start->next;
                    free(temp);

            printf("\nElement is deleted!!\n");
    }

}

void deleteAtEnd(){
  node *temp;
if(start==NULL) {
         printf("\nList is Empty!!\n");
    } else if(start->next==start){
            start=NULL;
            free(start);
             printf("\nElement is deleted!!\n");
    }
    else{
            temp=start;
            while(temp->next!=start){
                temp=temp->next;
            }
            temp->prev->next=start;
            start->prev=temp->prev;
           free(temp);
            printf("\nElement is deleted!!\n");
    }

}

void deleteAtPos(){
int pos,ctr;
node *temp=start;
if(start!=NULL){
printf("\nEnter the position : ");
scanf("%d",&pos);
ctr=nodeCounter(start->next);
printf("%d",ctr);
if(pos > 1 && pos < ctr){
        ctr=1;
    while(ctr<pos){
            temp =temp->next;
            ctr++;
    }
       temp->prev->next=temp->next;
       temp->next->prev=temp->prev;
        free(temp);
       printf("\nElement is Deleted!!\n");
} else{
printf("\nEnter Correct Position !!\n");
}
}else{
printf("\n List is Empty!!!\n");
}
}

void search(){
    int key,flag=0;
    node* temp =start;
    int ctr=1;
if(start ==NULL) {
         printf("\nList is Empty!!\n");
    }
    else{
            printf("\nEnter data to search : ");
            scanf("%d",&key);

            do{
                if(temp->data==key){
                    flag=1;
                    break;
                }
                ctr++;
                temp=temp->next;
            }while(temp!=start);
        if(flag){
            printf("\nElement %d Found at : %d location ",key,ctr);
        }else{
        printf("\nElement not Found!!!");

        }
}
}



void main(){
    int choice=0;
    int item;
    while(1){
        printf("\n==========Circular Double Linked List=========\n");
        printf("1. Insert At Beginning.\t5. Delete At Beginning.\n2. Insert at End.\t6. Delete At End.\n3. Insert at a position.7. Delete At a Position.\n4. Traverse by Left.\t8. Search \n9. Traverse By Right.\t10. Exit.\n");
        printf("\nEnter Your choice: ");
        scanf("%d",&choice);
        switch(choice){
        case 1 : insertAtBeg();
                 break;
        case 2:insertAtEnd();
                break;
        case 3: insertAtPos();
                break;
        case 4: traverse();
                break;
        case 5:deleteAtBeg();
                break;
        case 6:deleteAtEnd();
                break;
        case 7: deleteAtPos();
                break;
        case 8: search();
                break;
        case 9: traverseReverse();
                break;
        case 10: exit(0);
        default : printf("\nInvalid Choice!!!");

        }
    }
}
