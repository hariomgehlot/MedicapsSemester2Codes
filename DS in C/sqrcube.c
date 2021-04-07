#include<stdio.h>
#include<conio.h>
void main(){

  int i=1,limit,cube=0,square=0;
  printf("Enter the Natural number limit:\t");
  scanf("%d",&limit);
  for(i=1;i<=limit;i++)
    {

    printf("\nSquare of %d is : %d",i,i*i);
        square+=i*i;
    printf("\nCube of %d is   : %d",i,i*i*i);
    cube+=i*i*i;

    }
    printf("\n Sum of Squares: %d",square);
    printf("\n Sum of Cubes: %d",cube);

}
