#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n],i=0,j=0,cnt=0;
    while(i<n) {
    cin>>arr[i];
    i++;
    }
    while(j<n)
    { cnt+=arr[j];
    j++;}
    cout<<cnt;
    return 0;
}
