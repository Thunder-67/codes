#include<iostream>
#include<set>
using namespace std;
int main(){
set<int>s;
s.insert(10);
s.insert(20);
s.insert(15);
s.insert(25);
s.insert(1);
s.insert(2);
cout<<s.begin();
cout<<s.end();
}
