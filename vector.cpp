#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> v={2,6,8,10};
 v.push_back(20);
 v.pop_back();
 vector<int>::iterator itr;
 cout<<"using iterator ";
 for(itr=v.begin();itr!=v.end();itr++)
 {cout<<*itr<<endl;}
 cout<<"using loop ";
 for(int x:v)
 {cout<<x<<endl;}
 return 0;
}
