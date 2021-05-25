#include<iostream>
using namespace std;
int main()
{
 int fund,n,loss,profit,d;
 cout<<"enter the expense ";
 cin>>n;
 d=n*12;
 loss=15000-(n*12);
 profit=(n*12)-15000;
 if(d<15000)
 {
  cout<<"loss is "<<loss<<endl;
  fund=loss/15;
  cout<<"rate increased per flat "<<fund<<endl;
 }
 else
 {cout<<"profit is "<<profit;}
 return 0;
}
