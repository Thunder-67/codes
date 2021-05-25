#include<iostream>
using namespace std;
int main()
{
 int x[4]{2,34,6,8};
 int *p=x,*q=&x[3];
 cout<<*p<<endl;
 p++;
 cout<<*(p+2)<<endl;
 cout<<*q<<endl;
 cout<<*p<<endl;
 cout<<p-q<<endl;
}
