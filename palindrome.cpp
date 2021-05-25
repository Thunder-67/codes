#include <iostream>
using namespace std;
int main(){
char temp,n[]="eve",b[7];
int i,j,k;
for(i=0;n[i]!='\0';i++){
}
i=i-1;
cout<<i<<endl;
for(k=i,j=0;k>=0;k--,j++){
    b[j]=n[k];
}
cout<<b<<endl;
if(b==n)
    cout<<"palindrome"<<endl;
else
    cout<<"not palindrome"<<endl;
return 0;
}
