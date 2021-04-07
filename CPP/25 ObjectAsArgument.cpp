#include <iostream>
using namespace std;
class Square{
public:
      int num;
    int calc(Square s)
    {
        return s.num*s.num;
    }
};
int main(){
Square s;
cout<<"Enter number to find square :";
cin>>s.num;
cout<<"Square is :"<<s.calc(s)<<endl;

}