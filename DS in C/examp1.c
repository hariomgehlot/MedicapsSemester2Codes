#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack
{
	int data;
	struct stack *next;
};
void push();
void pop();
void peek();
void display();

typedef struct stack node;
node *top=NULL;

int main()
{
	int choice;
	while(1)
	{
		printf("\n____MENU____");
		printf("\n 1.push elements");
		printf("\n 2.pop elements");
		printf("\n 3.peek element");
		printf("\n 4.display elements");
		printf("\n 5.exit");
		printf("\n__________");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(top);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek(top);
				break;
			case 4:
				display(top);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\n entre a valid choice");
		}
	}
}
node *getnode()
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	printf("\n enter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void push(node *newnode)
{
	node *temp;
	newnode=getnode();
	if(newnode==NULL)
	{
		printf("\n stack overflow...");
		return;
	}
	if(top==NULL)
	{
		top=newnode;
		top=newnode;
	}
	else
	{
		 newnode->next=top;
        top=newnode;
	}
	printf("\n data is pushed into stack");
}
void pop()
{
	node *temp;
	if(top==NULL)
	{
		printf("\n stack underflow");
		return;
	}
	else
	{
    temp=top;
    top=top->next;
    printf("\n popped element is:%d",temp->data);
    free(temp);

	}
}
void peek()
{
	node *temp;
	if(top==NULL)
	{
		printf("\n stack is empty");
		return;
	}else{
	printf(" data at top is ==  %d",top->data);
	}

}
void display(node* temp)
{
	temp=top;
	if(temp==NULL)
	{
		printf("\n stack is empty");
	}
	else
	{

		printf("\n elements in stack are:\n");
	   		while(temp!=NULL)
		{
			printf("\n%d",temp->data);

			temp=temp->next;

		}
	}
}
