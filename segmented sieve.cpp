#include<iostream>
using namespace std;
int main(){
int n;cin>>n;
int p[n+1];
for(int i=0;i<=n;i++){
    p[i]=1;
}
p[0]=0;p[1]=0;
for(int i=2;i<=n;i++){
    if(p[i]==1){
        for(int j=2;i*j<=n;j++){
            p[i*j]=0;
        }
    }
}
for(int i=0;i<=n;i++){
    if(p[i]==1){
        cout<<i<<" ";
    }
}
return 0;
}
