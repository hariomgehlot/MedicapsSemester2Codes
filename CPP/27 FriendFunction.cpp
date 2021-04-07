#include<iostream>
using namespace std;
class FriendExample{
private:
    int number1,number2;
  public:
    FriendExample(int num1,int num2){
       number1=num1;
       number2=num2;
   }
   friend int show(FriendExample ex);
    
};
int show(FriendExample ex)  {
       return ex.number1+ex.number2;
  
}

int main(){
    FriendExample ex(10,60);
    cout<<"Sum is :"<<show(ex)<<endl;
    

}
