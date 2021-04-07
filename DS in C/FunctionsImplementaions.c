#include<stdio.h>
void args(int i ,int j);
int returntypewithoutargs();
float returntype(float arg1,float arg2);
void main(){
printf("\nThis Void main function is example of void type and no arguments!!\n");
args(5,8);
printf("\n%d",returntypewithoutargs());
printf("\n%f \n",returntype(9.6,3.8));

}
args(int i, int j){
printf("\nThis args function is example of void type with arguments!!!");
printf("\nSum of Arguments is : %d",i+j);
}

int returntypewithoutargs(){
printf("\nThis function is example of return type int without arguments and this returns size of itself!");
return sizeof(returntypewithoutargs());

}

float returntype(float i,float j){
printf("\nThis float function is example of return type with arguments!!\n");
printf("\nsum of two float arguments is : ");
return i+j;
}
