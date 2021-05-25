#include <iostream>
using namespace std;
int main() {
int i,n,s,max=INT_MIN,k;
cin>>k;
while(k--){
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++){
     cin>>arr[i];
  }
  for(i=0;i<n;i++){
     if(arr[i]>max){
        s=max;
        max=arr[i];
    }
  }
  for (i=0;i<n;i++){
      if(arr[i]<max && arr[i]>s){
         s=arr[i];
  }
  }
 cout<<s ;
}
 return 0;
}
