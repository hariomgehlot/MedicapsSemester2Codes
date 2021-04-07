#include<iostream>
using namespace std;
enum weekdays{
Sunday=1,
Monday,
Tuesday,
Wednesday=20,
Thursday,
Friday,
Saturday
};
int main(){
weekdays day=Wednesday;
cout<<"Wednesday =:"<<day<<endl;
day=Monday;
cout<<"Monday ="<<day<<endl;
day=Thursday;
cout<<"Thursday ="<<day<<endl;
return 0;
}
