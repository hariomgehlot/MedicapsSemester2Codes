#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 10
struct bankdata *details();
static int acc_number=0;
void createAccount();
void withdraw(struct bankdata *);
void deposit(struct bankdata *);
struct bankdata{
char name[20];
int acc_no;
float acc_bal;
char acc_type[20];
};
struct bankdata bkarray[MAX];
void main(){
    int choice=0;
    char con='y';
do{
    printf("\n\n************BANK MENU**************\n\n");
    printf("\nEnter Your Choice From Below: \n");
    printf("1. To Create an account.\n2. Search for an account.\n3. Withdraw Money.\n4. Deposit Money.\n5.Exit.\n");
    printf("\n Please Enter Your Choice:  ");
    scanf("%d",&choice);
    switch(choice){
    case 1 : createAccount();
            break;

    case 2 :details();
            break;

    case 3:withdraw(details());
            break;

    case 4: deposit(details());
            break;

    case 5: exit(0);
            break;

    default: printf("\n++++++++INVALID CHOICE++++++++++\n");
            break;
    }
    printf("\nDo you want to continue? (y/n)");
   // fflush(stdin);
    scanf("%c",&con);

}while(con=='y');
}

void createAccount(){
    if(acc_number<MAX){
acc_number++;
char last[10];
struct bankdata temp ;
printf("\n Enter Your Name : (FirstName LastName):");
scanf("%s%s",temp.name,last);
strcat(temp.name," ");
strcat(temp.name,last);
printf("\n Enter Bank Account Type (Savings/Current) : ");
scanf("%s",temp.acc_type);
temp.acc_bal =10000.0f;
temp.acc_no = acc_number;
bkarray[acc_number]=temp;
printf("\n+++++++++ACCOUNT SUCCESSFULLY CREATED+++++++++++\n");

printf("\nName : %s\n",bkarray[acc_number].name);
printf("Account Number : %d\n",bkarray[acc_number].acc_no);
printf("Balance : %.2f\n",bkarray[acc_number].acc_bal);
printf("Account type : %s\n",bkarray[acc_number].acc_type);
    }else{
    printf("\n+++++BANK FULL+++++\n");
    }
}
struct bankdata * details(){
    int temp;
printf("\n Enter Account Number : ");
scanf("%d",&temp);

if(temp==0 || temp>acc_number){
printf("\n NO DETAILS FOUND! ENTER CORRECT ACCOUNT NUMBER.\n");
return NULL;
}else{

printf("\n+++++++++ACCOUNT DETAILS FOUND++++++++++\n");
printf("\nName : %s\n",bkarray[temp].name);
printf("Account Number : %d\n",bkarray[temp].acc_no);
printf("Balance : %.2f\n",bkarray[temp].acc_bal);
printf("Account type : %s\n",bkarray[acc_number].acc_type);
 return &bkarray[temp];

}
}

void withdraw(struct bankdata *bk){
        float with;
        if(bk->acc_no<=acc_number){
        if(bk->acc_bal>10000.0f){
        printf("\nEnter Amount of Money you want to withdraw : ");
        scanf("%f",&with);
        if(with<=bk->acc_bal && (bk->acc_bal-with>=10000)){
        bk->acc_bal-=with;
        printf("\n Amount Debited!!\n Current Balance : %.2f\n",bk->acc_bal);
        }else{
        printf("\n Sorry ! You don't have sufficient balance!\n");
        }
    }else{
    printf("\n Sorry ! You don't have sufficient balance!\n");
    }
        }else{
            printf("======Enter Correct Account Number======");
    }

}
void deposit(struct bankdata *bk){
     float amt;
     if(bk->acc_no<=acc_number){
    printf("Enter amount you wan't to deposit : ");
    scanf("%f",&amt);
    bk->acc_bal+=amt;
    printf("\n Money Deposited->\n Current Balance : %.2f",bk->acc_bal);

}
}



