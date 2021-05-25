#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int h[10]={0};
for(int i=0;i<n;i++){
    cin>>a[i];
}
int x;
for(int i=0;i<n;i++){
    x=a[i]%10;
    h[x]=a[i];
}
for(int i=0;i<10;i++){
    cout<<i<<" "<<h[i]<<endl;
}
cout<<1%2;
return 0;
}
