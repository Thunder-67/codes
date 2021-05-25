#include <iostream>
using namespace std;
int main(){
char n[]="WelcomeZone";
int i;
for(i=0;n[i]!='\0';i++){
    if(n[i]>=65 && n[i]<=90)
        n[i]+=32;
    else if(n[i]>=97 && n[i]<=122)
        n[i]-=32;
}
cout<<n;
return 0;
}
