#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
node *head;
void push(int data){
  node* temp=new node();
  temp->data=data;
  temp->next=head;
  head=temp;
}
void pop(){
node *temp=new node();
temp=head;
head=temp->next;
free(temp);
}
void print(){
 node* temp=head;
 while(temp != NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
}
cout<<endl;
}
int main(){
push(2);print();
push(5);print();
push(8);print();
pop();print();
push(7);print();
}
