#include <iostream>
using namespace std;
#include<stack>
#include<cstring>

int postfix_evaluate(string s){
stack<int> Stack;

for(int i=0;i<s.length();i++){ if(s[i]>=48&&s[i]<=57){
Stack.push(s[i]-'0');
}
else{
int first=Stack.top();
Stack.pop();
int second=Stack.top();
Stack.pop();
switch(s[i]){
case '+': Stack.push(second+first); break;
case '-': Stack.push(second-first); break;
case '*': Stack.push(second*first); break;
case '/': Stack.push(second/first); break;
}

}
}
return Stack.top();
}
int main() {
//code
int t;
cin>>t;

while(t--){
string S;
cin>>S;

int value=postfix_evaluate(S);
cout<<value<<endl;
}
return 0;
}
