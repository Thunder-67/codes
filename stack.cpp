#include<iostream>
#define MAX_SIZE 101
using namespace std;
int a[MAX_SIZE];
int top=-1;
void push(int data){
  if (top == MAX_SIZE -1){
  cout<<"error: stack overflow ";
  return;
  }
  a[++top]=data;
}
void pop(){
if(top==-1){
   cout<<"error: no element to pop";
   return;
  }
 top--;
}
int Top(){
 return a[top];
}
void print(){
cout<<"stack ";
for(int i=0;i<=top;i++){
    cout<<a[i];
 }
 cout<<endl;
}
int main(){
push(2);print();
push(5);print();
push(6);print();
pop();print();
push(9);print();
Top();print();
}
