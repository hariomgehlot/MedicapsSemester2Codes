#include<stdio.h>
#define MAX 10
int isFull();
int  isEmpty();
void push();
void pop();
void peek();
void display();
static top =-1;
int stack[MAX];
void main(){
int choice=0;
char ch;
while(1){
printf("-------Choose an Option From the Following 1 to 7----------:\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Peek\n");
printf("4. Display\n");
printf("5. isEmpty()\n");
printf("6. isFull\n");
printf("7. Quit\n");
scanf("%d",&choice);
switch(choice){
case 1: {
        push();
        break;
        }
case 2:{
        pop();
        break;
        }
case 3: {
        peek();
        break;
         }
case 4: {
        display();
        break;
        }
case 5: {
        if(isEmpty()){
            printf("Stack is Empty!!!\n");
        }else{
            printf("Stack is Not Empty!!!\n");
        }

        break;
        }
case 6: {
       if(isFull()){
            printf("Stack is Full!!!\n");
        }else{
        printf("Stack is Not Full!!!\n");
        }

        break;
        }
case 7: {   printf("\nGood bye :)");
            exit(0);
        }

default : printf("Invalid Input ! Please Choose Correct option.\n");

 }


}

}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(){
    int item=0;
    if(top<MAX){
        printf("\n Enter the Data you want to add: ");
        scanf("%d",&item);
         top++;
        stack[top]=item;
        printf("Item Added!\n");
    }else if(isFull()){
        printf("--Stack is overflow can't add more data!!\n");
    }


    }
void pop(){
        if(isEmpty()){
            printf("Stack is Empty!! Can't Remove Items.\n");
        }else{
            printf("Item on top = %d is deleted.\n",stack[top]);
             top--;
        }



    }
void peek(){
        if(isEmpty()){
            printf("Stack is Empty ! can't peek.\n");
        }else{
           printf("\nThe Top element is %d.\n",stack[top]);

        }


    }
void display(){
        int i =0;
        if(isEmpty()){
               printf("Stack is Empty ! can't Display values.\n");
        }else {
            printf("Elements are::\n");
            for(i=top;i>=0;i--){
                printf("%d ",stack[i]);
            }
        }
        printf("\n");
            }







