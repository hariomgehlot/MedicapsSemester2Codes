#include<stdio.h>
void main(){
int arr[3][3],i,j,c=1;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    arr[i][j]=c;
    c++;
    }
}
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            if(i+j<=2)
            printf("%d ",arr[i][j]);
    }
    printf("\n");
 }

}
