#include<iostream>
using namespace std;
int gcd(int a,int b){
if(a==0)
    return b;
else
    return gcd(b%a,a);
}
int phi(int n){
int r=1;
for(int i=2;i<n;i++){
    if(gcd(i,n)==1)
        r++;
}
return r;
}
int main(){

cout<<phi(35)<<endl;
return 0;
}
