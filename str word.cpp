#include <iostream>
using namespace std;
int main(){
char n[]="Welcome to the Zone";
int i,word=1;
for(i=0;n[i]!='\0';i++){
    if(n[i]==' ')
        word++;
}
cout<<word;
return 0;
}
