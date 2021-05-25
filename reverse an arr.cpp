#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n],i=0,j=n-1,temp;
while(i<n) {
  cin>>arr[i];
  i++;
}
i=0;
while(i<j){
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  i++;
  j--;
}
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
