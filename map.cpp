#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
int a[7]={4,2,-3,1,6,2,2};
unordered_map<int,int>m;
for(int i=0;i<7;i++){
    m[a[i]]++;
}
unordered_map<int,int>::iterator it;
for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<" ";
    cout<<it->second<<endl;
}
return 0;
}
