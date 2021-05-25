#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,i=0;
cin>>n;

int arr[n];
for(int j=0;j<n;j++){
    cin>>arr[j];
}
int h[10]={0};
for(int i=0;i<n;i++){
    h[arr[i]]++;
}
for(int i=0;i<10;i++){
    cout<<h[i]<<" ";
}
cout<<endl;
for(int i=0;i<10;i++){
    if(h[i]==1){
        cout<<i;
    }
}
}
return 0;
}
