#include<stdio.h>

void TOH(int n, char a, char b ,char c){
if(n==1){
    printf("Move  disk %d From %c to %c\n\n",n,a,c);
}
else{
TOH(n-1,a,c,b);
  printf("Move disk %d From %c to %c\n\n",n,a,c);
TOH(n-1,b,a,c);
}
}
void main(){
    char a='A',b='B',c='C';
int n =0;
printf("Enter number of disks: ");
scanf("%d",&n);
TOH(n,a,b,c);
}
