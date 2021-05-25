#include <iostream>
#include<map>
using namespace std;
int main(){
int i;
int a[5]={2,2,5,6,6};
map<int,int> mp;
for(i=0;i<5;i++){
mp[a[i]]++;
}
map<int,int>::iterator it;
for(it=mp.begin();it!=mp.end();it++)
{if(it->second==1)
{cout<<it->first<<endl;
break;
}
}
return 0;}
