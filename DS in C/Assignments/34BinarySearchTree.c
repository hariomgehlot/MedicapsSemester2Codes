#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};


struct node* root;
int flag=0,delFlag=0;
struct node* createNode(int data){
   struct  node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

struct node* minNode(struct node* node){

struct node* temp=node;
   while(temp&& temp->left !=NULL ){
    temp=temp->left;
}

return temp;
}


struct node* insert(struct node * node, int data){
if(node==NULL){
    return createNode(data);
}else{
if(data<node->data)
   node->left=insert(node->left,data);
    else
    node->right=insert(node->right,data);
}

return node;
}


struct node*  deleteNode(struct node* node,int data){
if (node==NULL)
return node;

if(data<node->data){
node->left=(struct node*)deleteNode(node->left,data);
}
else if(data>node->data){
    node->right=(struct node*)deleteNode(node->right,data);
}
else{
     if(node->left==NULL){                            //one right child
             struct  node *temp;
         temp = node->right;
        free(node);
        delFlag=1;
        return temp;
     } else if(node->right==NULL){                 //one left child
          struct  node *temp;
         temp =node->left;
        free(node);
        delFlag=1;
        return temp;
     }
     struct  node *temp=minNode(node->right);               //two children

     node->data=temp->data;

     node->right=(struct node*)deleteNode(node->right,temp->data);

}
return node;
}


void InorderTraverse(struct node* node)
{
    if (node != NULL) {
       InorderTraverse(node->left);
        printf("%d ", node->data);
        InorderTraverse(node->right);
    }
}


void PostorderTraverse(struct node* node)
{
    if (node != NULL) {
       PostorderTraverse(node->left);
        PostorderTraverse(node->right);
         printf("%d ", node->data);
    }
}

void PreorderTraverse(struct node* node)
{
    if (node != NULL) {
     printf("%d ", node->data);
       PreorderTraverse(node->left);
        PreorderTraverse(node->right);
    }
}

void search(struct node *temp, int value){
    if(root == NULL){
        printf("Tree is empty\n");
    }
    else{
        if(temp->data == value){
            flag = 1;
             return;
        }
        if(flag == 0 && temp->left != NULL){
        search(temp->left, value);
        }
        if(flag == 0 && temp->right != NULL){
        search(temp->right, value);
        }
    }
}

void main(){
int data,ch;
while(1){
    printf("========Binary Search Tree=======\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.In order Traversal\n");
    printf("4.Post order Traversal\n");
    printf("5.Preorder Traversal\n");
    printf("6.Search\n");
    printf("7.Exit\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch){
    case 1: printf("Enter data to insert : ");
            scanf("%d",&data);
            root=insert(root,data);
            printf("Node Inserted!\n");
            break;

    case 2: if(root!=NULL){
            printf("Enter node to delete  : ");
            scanf("%d",&data);
            root=(struct node*)deleteNode(root,data);
            if(delFlag==1){
            printf("\nNode Deleted!\n");
            delFlag=0;
            }else{
            printf("\nNode not Found!!!\n");
            }
            }else{
            printf("Tree is empty!\n");
            }
            break;
    case 3 : if(root!=NULL){
           InorderTraverse(root);
            printf("\n");
            }else{
            printf("Tree is empty!\n");
            }
            break;
    case 4:  if(root!=NULL){
           PostorderTraverse(root);
            printf("\n");
            }else{
            printf("Tree is empty!\n");
            }
            break;
    case 5:  if(root!=NULL){
           PreorderTraverse(root);
            printf("\n");
            }else{
            printf("Tree is empty!\n");
            }
            break;
    case 6: if(root!=NULL){
            printf("Enter data to search : ");
            scanf("%d",&data);
            search(root,data);
            if(flag==1){
                printf("\nNode Found!!!\n");
                flag=0;
            }
                else
                printf("\Node not found!!\n");
                }else{
                printf("\nTree is empty!");
                }
                break;
    case 7: exit(0);
    default:printf("Enter Correct Choice!!\n");

}
}

}
