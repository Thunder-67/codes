#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int i,n;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n,greater<int>());
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<"the second largest is: "<<arr[1];
return 0;
}
