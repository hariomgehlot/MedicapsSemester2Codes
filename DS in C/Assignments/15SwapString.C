#include<stdio.h>
void main(){
char name1[]="First Name";
char name2[]="Second Name";
char *p1[1];
char *p2[1];
char *p3[1];
p1[0]=name1;
p2[0]=name2;
printf("\nBefore Swapping the Values are p1 = %s and p2 =%s",*p1,*p2);
p3[0]=p1[0];
p1[0]=p2[0];
p2[0]=p3[0];
printf("\nAfter Swapping the Values are p1 = %s and p2 =%s",*p1,*p2);
}
