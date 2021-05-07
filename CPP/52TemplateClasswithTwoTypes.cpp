#include <iostream>
#include <typeinfo>
using namespace std;
template <class T,class V>
class  templateExample{
    public:
    T t;
    V v;
    void input(){
        cout<<"Enter two data:"<<endl;
        cout<< typeid(t).name() << endl;
          cout<< typeid(v).name() << endl;
        cin>>t;
        cin>>v;
    }
    void display(){
        cout<<t<<endl;
        cout<<v<<endl;
    }
};

int main(){
    templateExample<string,int> tc;
    tc.input();
    tc.display();
    templateExample<float,string> tfloat;
    tfloat.input();
    tfloat.display();
    templateExample<int,float> tint;
    tint.input();
    tint.display();
    return 0;

}
