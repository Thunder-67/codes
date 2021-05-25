#include <iostream>
using namespace std;
int main(){
char temp,n[]="eve";
int i,j;
for(i=0;n[i]!='\0';i++){
}
j=i-1;
cout<<j<<endl;
for(i=0;i<j;i++,j--){
    temp=n[j];
    n[j]=n[i];
    n[i]=temp;
}
cout<<n;
return 0;
}
