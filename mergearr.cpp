#include <iostream>
using namespace std;
int main(){
int a[5]={2,5,8,66,70},b[5]={3,4,9,22,50},c[10],i=0,j=0,k=0;
while(i<5 && j<5){
    if(a[i]<b[j])
        c[k++]=a[i++];
    else
        c[k++]=b[j++];
}
for( ;i<5;i++){
    c[k++]=a[i];
}
for( ;j<5;j++){
    c[k++]=a[j];
}
for(k=0;k<10;k++){
    cout<<c[k]<<" ";
}
return 0;
}
