#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
	vector<int> v={10,9,8,7,6,5,4,3,2,1};
	vector<int>::iterator ptr;
	cout<<"Elements of the  vector:\n";
    for(ptr=v.begin(); ptr!=v.end(); ptr++)
        cout<<*ptr<<"  ";

    ptr=v.begin();      //ptr pointing to beggining of the vector
	advance(ptr,3);
	cout<<"\n\nadvance()\nPosition of iterator after using advance() by 3: "<< *ptr<<endl;

    auto itr1=next(ptr,3);
    cout<<"\nnext()\nPosition of iterator  after using next() by 3: "<<*itr1<<endl;

    auto itr2=prev(itr1,2);
    cout<<"\nprev()\nPosition of iterator  after using prev() by 2: "<<*itr2<<endl;

	return 0;
}