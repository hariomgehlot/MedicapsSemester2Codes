#include<stdio.h>
#include<conio.h>
void main(){
int a[5][5],b[5][5],c[5][5],i,j,sizeA=0,sizeB=0;
        printf("Enter size of array upto 5 :\n");

        scanf("%d%d",&sizeA,&sizeB);

        printf("Enter First array:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++)
                {
                 scanf("%d" ,&a[i][j]);
                }
            printf("\n");
        }
        printf("Enter Second array:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++){
                scanf("%d",&b[i][j]);
                }
                printf("\n");
        }

        printf("\nAddition is : \n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     +\n");

        for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    printf("| %d ",b[i][j]);
                    }
                                     printf("\n");

     }

     for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    }

     }


   printf("     =\n");
           printf("\n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }


            printf("\nSubtraction  is : \n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     -\n");

        for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    printf("| %d ",b[i][j]);
                    }
                                     printf("\n");

     }

     for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                    }

     }


   printf("     =\n");
           printf("\n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }



}


