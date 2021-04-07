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
printf("\nEnter data to add in the list: ");
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


void insertAtBeg(){
    node* newnode = getNode();
    if(start ==NULL) {
            start=newnode;
         printf("\nElement is inserted!!\n");
    }
    else{
            newnode->next=start;
            start=newnode;
            printf("\nElement is inserted!!\n");
    }
}

void insertAtEnd(){
 node* newnode = getNode();
 node* temp;
    if(start ==NULL) {
            start=newnode;
         printf("\nElement is inserted!!\n");
    }
    else{
            temp=start;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
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
            do{
                printf(" %d",temp->data);
                if(temp->next!=NULL) printf("->");
                else printf("->NULL");
                temp=temp->next;
            }while(temp!=NULL);
    }
}

void traverseRecurse(node *ptr){
if(ptr==NULL){
        printf("NULL");
    return ;

}else{
    traverseRecurse(ptr->next);
        printf(" ->");
    printf(" %d",ptr->data);

}

}


void deleteAtBeg(){
    node *temp;
if(start ==NULL) {
         printf("\nList is Empty!!\n");
    }
    else{
            temp=start;
            start=start->next;
            free(temp);
            printf("\nElement is deleted!!\n");
    }

}

void deleteAtEnd(){
  node *temp;
  node *prev;
if(start==NULL) {
         printf("\nList is Empty!!\n");
    } else if(start->next==NULL){
            start=NULL;
            free(start);
             printf("\nElement is deleted!!\n");
    }
    else{
            temp=prev=start;
            while(temp->next!=NULL){
                    prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
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



void main(){
    int choice=0;
    int item;
    while(1){
        printf("\n==========Single Linked List=========\n");
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
        case 9: traverseRecurse(start);
                break;
        case 10: exit(0);
        default : printf("\nInvalid Choice!!!");

        }
    }
}
