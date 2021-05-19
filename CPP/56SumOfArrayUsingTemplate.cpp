#include<iostream>
using namespace std;
template<class T>
class Sum{
    public:
    int n;
    T *ptr;
    T sum(){
        T res=0;
        for(int i =0;i<n;i++)
        res+=ptr[i];
        return res;
    }

    Sum(int x){
        n=x;
        ptr=new T[n];

        for (int i=0;i<n;i++){
            ptr[i]=0;

        }
    }
    void input(){

        cout<<"\n\nEnter "<<n<<" Values of Array :";
        for (int i =0;i<n;i++)
            cin>>ptr[i];

    }


    void display(){
        cout<<"Sum is "<<sum();
    }

    };



int main(){


    Sum<int> arr(5);
    arr.input();
    arr.display();
    Sum<float> brr(5);
    brr.input();
    brr.display();
    return 0;
}