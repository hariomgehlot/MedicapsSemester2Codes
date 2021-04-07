#include<stdio.h>
#include<stdlib.h>

struct clist{
    int data;
    struct clist *next;
};
typedef struct clist node;
node* start =NULL;

node* getNode(){
    int item;
    node *ptr =(node *)malloc(sizeof(node));
    if(ptr!=NULL){
printf("\nEnter data to add in the list: ");
scanf("%d",&item);
    ptr->data=item;
    ptr->next=NULL;
    return ptr;
    } else{
            printf("\nError!! Memory can't be allocated.\n");
    }
}

int nodeCounter(node* ptr){
int counter=0;
while(ptr->next!=start){
    ptr=ptr->next;
    counter++;
}
counter++;
return counter;
}


void insertAtBeg(){
    node* newnode = getNode();
    node * temp=start;
    if(start ==NULL){
            start=newnode;
            start->next=start;
         printf("\nElement is inserted!!\n");
    }
    else{
            while(temp->next!=start){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=start;
            start=newnode;
            printf("\nElement is inserted!!\n");
    }
}

void insertAtEnd(){
 node* newnode = getNode();
 node* temp=start;
    if(start ==NULL) {
            start=newnode;
            start->next=start;
         printf("\nElement is inserted!!\n");
    }
    else{
            while(temp->next!=start){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=start;
            printf("\nElement is inserted!!\n");
    }
}

void insertAtPos(){
int pos,ctr;
node* temp ;
node * newnode;
temp=start;
printf("\nEnter the position : ");
scanf("%d",&pos);
ctr=nodeCounter(start);
printf("\nCounter is : %d",ctr);
if(pos > 1 && pos < ctr){
        newnode = getNode();
        ctr=1;
    while(ctr<pos-1){
        temp =temp->next;
        ctr++;
    }
      newnode->next= temp->next;
      temp->next=newnode;
       printf("\nElement is inserted!!\n");
} else{
printf("\nEnter Correct Position !!\n");
}
}

void traverse(){
    node* temp;
 if(start==NULL) printf("\n The list is Empty!!!\n");
    else{
            temp=start;
            printf("Start->");
            do{
                printf(" %d",temp->data);
                if(temp->next!=start) printf("->");
                temp=temp->next;
            }while(temp!=start);
    }
}

void traverseReverse(node * ptr){
    if(ptr->next==start){
        printf("Start->%d->",ptr->data);
        return;
    }else{
        traverseReverse(ptr->next);
        if(ptr==start) printf("%d ",ptr->data);
        else printf("%d ->",ptr->data);
    }

}

void deleteAtBeg(){
    node *temp=start;
    node *prev=start;
if(start ==NULL) {
         printf("\nList is Empty!!\n");
    }
    else if(start->next==start){
            start=NULL;
        free(start);
        printf("\nElement is deleted!!\n");
            }else{
            while(temp->next!=start){
            temp=temp->next;
           }
           temp->next=start->next;
            start=start->next;
            free(prev);
            printf("\nElement is deleted!!\n");
    }

}

void deleteAtEnd(){
  node *temp;
  node *prev;
if(start==NULL) {
         printf("\nList is Empty!!\n");
    } else if(start->next==start){
            start=NULL;
            free(start);
             printf("\nElement is deleted!!\n");
    }
    else{
            temp=prev=start;
            while(temp->next!=start){
                    prev=temp;
                temp=temp->next;
            }
            prev->next=start;
           free(temp);
            printf("\nElement is deleted!!\n");
    }

}

void deleteAtPos(){
int pos,ctr;
node* temp ;
node*prev;
temp=prev=start;
printf("\nEnter the position : ");
scanf("%d",&pos);
ctr=nodeCounter(start);
if(pos > 1 && pos < ctr){
        ctr=1;
    while(ctr<pos){
            prev=temp;
        temp =temp->next;
        ctr++;
    }
        prev->next=temp->next;
        free(temp);
       printf("\nElement is Deleted!!\n");
} else{
printf("\nEnter Correct Position !!\n");
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
        printf("\n==========Circular Linked List=========\n");
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
        case 9: traverseReverse(start);
                break;
        case 10: exit(0);
        default : printf("\nInvalid Choice!!!");

        }
    }
}
