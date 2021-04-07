#include<stdio.h>
#include<stdlib.h>
struct stack{
int data;
struct stack * next;
};
typedef struct stack node;
node *top=NULL;

node * getnode(){
node* newnode = (node*)malloc(sizeof(node));
printf("\nEnter node data : ");
scanf("%d",&newnode->data);
newnode->next=NULL;
return newnode;
}

int countNode(node *head){
int counter=0;
while(head->next!=NULL){
    counter++;
}
counter++;
return counter;
}

void push(){
node * newnode = getnode();
if(newnode!=NULL){
    if(top==NULL){
        top=newnode;
        printf("\nNode Pushed Successfully!\n");
    }else{
        newnode->next=top;
        top=newnode;
        printf("\nNode Pushed Successfully!\n");
    }
}else{
    printf("\nStack Overflow!!\n");
    }
}

void pop(){
    node *temp;
    int data;
if(top==NULL){
    printf("\nStack is Empty!!\n");
}else{
        temp=top;
        data=top->data;
        top=top->next;
        free(temp);
        printf("\nNode %d Popped Successfully!!\n",data);
}
}

    void peek(){
    if(top==NULL){
    printf("\nStack is Empty!!\n");
    }else{
    printf("\nPeeked Node is : %d",top->data);
    }
    }

void display(){
    node * temp;
if(top==NULL){
    printf("\nStack is Empty!!\n");
}
else{
        temp=top;
    while(temp!=NULL){
        printf("\n| %d |",temp->data);
        temp=temp->next;
    }
    printf("\n ----");
}
}

void search(){
int key,flag=0,ctr=1;
node* temp=top;
if(top==NULL){
    printf("\nStack is Empty!!\n");
}
else{
        printf("\nEnter search item : ");
        scanf("%d",&key);
        while(temp!=NULL){
            if(temp->data==key){
                flag++;
                break;
            }
             ctr++;
            temp=temp->next;
        }

if(flag==0){
    printf("\nNode not found!!\n");
}
else{
    printf("\nNode :%d found at %d location.\n",temp->data,ctr);

}
}
}

void main(){
int ch;
while(1){
    printf("\n=====Stack Menu=====\n");
    printf("1.Push.\n");
    printf("2.Pop.\n");
    printf("3.Peek.\n");
    printf("4.Display\n");
    printf("5.Search\n");
    printf("6.Exit.\n");
    printf("Enter Your Choice (1-5): ");
    scanf("%d",&ch);
    switch(ch){
    case 1 :push();
    break;
    case 2: pop();
    break;
    case 3: peek();
    break;
    case 4: display();
    break;
    case 5: search();
    break;
    case 6: exit(0);
    break;
    default :printf("\nInvalid choice!!");
    }
}
}

