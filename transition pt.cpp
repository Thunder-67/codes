#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int transitionPoint(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
int transitionPoint(int arr[], int n) {
    int i=0,c=0;
    while(i<n){
         if(arr[i]==0)
            c++;
         i++;
    }
    if(c==n)
        c=-1;
    return c;
}
