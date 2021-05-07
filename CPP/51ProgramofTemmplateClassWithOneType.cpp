#include <iostream>
#include <typeinfo>
using namespace std;
template <class T>
class  templateExample{
    public:
    T c;
    void input(){
        cout<<"Enter data:"<<endl;
        cout<< typeid(c).name() << endl;
        cin>>c;
    }
    void display(){
        cout<<c<<endl;
    }
};

int main(){
    templateExample<string> tc;
    tc.input();
    tc.display();
    templateExample<float> tfloat;
    tfloat.input();
    tfloat.display();
    templateExample<int> tint;
    tint.input();
    tint.display();
    return 0;

}
