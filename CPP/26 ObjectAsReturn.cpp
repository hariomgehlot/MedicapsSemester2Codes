#include <iostream>
using namespace std;
class Addition{
public:
      int num;
    Addition calc(Addition s)
    {
        Addition obj;
        obj.num=s.num+num;
        return obj ;
    }
};
int main(){
Addition s,a;
cout<<"Enter two numbers to find addition :";;
cin>>a.num;
cin>>s.num;
a=a.calc(s);
cout<<"Square is :"<<a.num<<endl;

}