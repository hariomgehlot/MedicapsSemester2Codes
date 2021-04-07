#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    int i,n;
    struct student s[10];
    printf(" Enter no.of students : ");
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        printf(" Enter for Student 1 :: \n");
        printf(" Enter name :");
        scanf("%s",s[i].name);
        /*fflush(stdin);
        gets(s[i].name);*/
        printf(" Enter Roll no. :\n Enter Marks :");
        scanf("%d%f",&s[i].roll_no,&s[i].marks);
    }
    printf(" Record Of %d Students :: \n");
    for(i=0; i<n ; i++)
    {
        printf(" Name   : %s \n Roll no. : %d\n Marks   : %f\n\n",s[i].name,s[i].roll_no,s[i].marks);
    }

}
