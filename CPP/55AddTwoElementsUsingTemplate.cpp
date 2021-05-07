#include <iostream>
#include <typeinfo>
using namespace std;
template <class T>
class  templateExample{
    public:
    T t,v;
    void input(){
        cout<<"Enter two data:"<<endl;
        cout<< typeid(t).name() << endl;
        cin>>t;
        cin>>v;
    }
    void display(){
        cout<<t+v<<endl;
    }
};

int main(){
    templateExample<int> tc;
    tc.input();
    tc.display();
    templateExample<string> tfloat;
    tfloat.input();
    tfloat.display();
    templateExample<float> tint;
    tint.input();
    tint.display();
    return 0;

}
