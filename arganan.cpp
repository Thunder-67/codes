#include <iostream>
using namespace std;
bool validate(char n[]){
int i;
for(i=0;n[i]!='\0';i++){
    if(!(n[i]>=65&&n[i]<=90)&&!(n[i]>=97&&n[i]<=122)&&!(n[i]>=48&&n[i]<=57)&&!(n[i]==46&&n[i]==64))
        return false;
}
return true;
}
int main(){
char n[]="Aman120@yahoocom";
if(validate(n)){
    cout<<"id approved";
}
else{
    cout<<"not approved";
}
return 0;
}
