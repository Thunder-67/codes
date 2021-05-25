#include<iostream>
using namespace std;
int main()
{
 int a,b,c,option;
 cout<<"1.addition\n"<<"2.subtraction\n";
 cout<<"enter your choice ";
 cin>>option;
 cin>>a>>b;
 switch(option)
 {
   case 1:c=a+b;
       break;
   case 2:c=a-b;
       break;
 }
 cout<<"result is "<<c<<endl;
}
