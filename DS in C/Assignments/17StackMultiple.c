#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int isFull();
int  isAEmpty();
void pushA();
void popA();
void peekA();
void displayA();
static int topA=-1;
int stack[MAX];
int  isBEmpty();
void pushB();
void popB();
void peekB();
void displayB();
static int topB=MAX;
void main(){
int choice=0;
char ch;
while(1){
printf("-------Choose an Option From the Following 1 to 12----------:\n");
printf("1. Push A\t 7. is Full\n");
printf("2. Push B\t 8. Display A\n");
printf("3. Peek A\t 9. Display B\n");
printf("4. Peek B\t 10.pop A\n");
printf("5.is A Empty.    11. pop B\n");
printf("6.is B Empty");
printf("\t 12. Quit\n");
scanf("%d",&choice);
switch(choice){
case 1:pushA();
        break;
case 2: pushB();
        break;
case 3:peekA();
        break;
case 4: peekB();
        break;
case 5: if(isAEmpty()){
            printf("Stack A is Empty!!!\n");
        }else{
            printf("Stack A is Not Empty!!!\n");
        }
        break;
 case 6: if(isBEmpty())
            printf("Stack  B is Empty!!\n");
            else
                printf("Stack B is Not Empty!!\n");
            break;
case 7:if(isFull()){
            printf("Stack is Full!!!\n");
        }else{
        printf("Stack is Not Full!!!\n");
        }
        break;
case 8: displayA();
        break;
case 9: displayB();
        break;
case 10: popA();
        break;
case 11: popB();
        break;
case 12: exit(0);
default : printf("\nInvalid Input ! Please Choose Correct option.\n");
 }
}
}
int isAEmpty(){
    if(topA==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    if(topA==topB-1){
        return 1;
    }
    else{
        return 0;
    }
}
void pushA(){
    int item=0;
    if(isFull()){
        printf("--Stack is overflow can't add more data!!\n");
    }
    else{
        printf("\n Enter the Data you want to add: ");
        scanf("%d",&item);
         topA++;
        stack[topA]=item;
        printf("Item Added!\n");
    }
    }
void popA(){
        if(isAEmpty()){
            printf("Stack is Empty!! Can't Remove Items.\n");
        }else{
            printf("Item on top = %d is deleted.\n",stack[topA]);
             topA--;
        }
    }
void peekA(){
        if(isAEmpty()){
            printf("Stack is Empty ! can't peek.\n");
        }else{
           printf("\nThe Top element is %d.\n",stack[topA]);

        }
    }
void displayA(){
        int i =0;
        if(isAEmpty()){
               printf("Stack is Empty ! can't Display garbage value.\n");
        }else {
            printf("Elements are::\n");
            for(i=topA;i>=0;i--){
                printf("%d ",stack[i]);
            }
        }
        printf("\n");
}
int isBEmpty(){
    if(topB==MAX){
        return 1;
    }
    else{
        return 0;
    }
}
void pushB(){
    int item=0;
        if(isFull()){
            printf("Stack B is Full !! Can't add more data!!\n");
        }
        else{
        printf("\n Enter the Data you want to add: ");
        scanf("%d",&item);
         topB--;
        stack[topB]=item;
        printf("Item Added!\n");
    }
    }
void popB(){
        if(isBEmpty()){
            printf("Stack is Empty!! Can't Remove Items.\n");
        }else{
            printf("Item on top = %d is deleted.\n",stack[topB]);
             topB++;
        }
    }
void peekB(){
        if(isBEmpty()){
            printf("Stack is Empty ! can't peek.\n");
        }else{
           printf("\nThe Top element is %d.\n",stack[topB]);

        }
    }
void displayB(){
        int i =0;
        if(isBEmpty()){
               printf("Stack is Empty ! can't Display values.\n");
        }else {
            printf("Elements are::\n");
            for(i=topB;i<MAX;i++){
                printf("%d ",stack[i]);
            }
        }
        printf("\n");
            }
