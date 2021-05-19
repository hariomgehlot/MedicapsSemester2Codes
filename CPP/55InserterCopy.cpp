#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> main={10,9,8,7,6,5,4,3,2,1};
vector<int> tobeCopied={5,5,5,5,5};
vector<int>::iterator itr;
itr=main.begin();
advance(itr,5);
std::copy(tobeCopied.begin(),tobeCopied.end(),std::inserter(main,itr));
for (itr=main.begin();itr!=main.end();itr++){
    cout<<*itr<<" ";
}
    cout<<"\n";
    return 0;
}