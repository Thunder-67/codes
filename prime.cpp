#include<iostream>
using namespace std;
int main()
{
 int n,cnt=0;
 cout<<"enter the number  ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  if (n%i==0)
    cnt++;
 }
 if(cnt==2)
    cout<<"it is prime";
 else cout<<"it is not prime";
 return 0;
}
