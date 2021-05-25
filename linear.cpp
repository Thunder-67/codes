#include<iostream>
using namespace std;
int main()
{
 int i,a[50],n,key;
 cout<<"enter the number";
 cin>>n;
 cout<<"enter numbers";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"enter the key";
 cin>>key;
 for (i=0;i<n;i++)
 {
  if(key==a[i])
  {
   cout<<"key is found at location "<<i;
   return 0;
  }
 }
 cout<<"key not found "<<endl;
}
