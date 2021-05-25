#include <iostream>
using namespace std;
int main() {
int n,a[5]={2,3,4,45,6},b[50],i,j;
for(i=5-1,j=0;i>0;i--,j++){
    b[j]=a[i];
}
for(i=0;i<5;i++){
    a[i]=b[i];
}
for(i=0;i<5;i++){
    cout<<a[i]<<"  ";
}
return 0;
}
