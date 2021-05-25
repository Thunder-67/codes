#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
node *head;
void insert(int data){
  node* temp=new node();
  temp->data=data;
  temp->next=head;
  head=temp;
}
void reverse()
{
 node *temp,*prev,*nex;
 temp=head;
 prev=NULL;
 while(temp!=NULL){
 nex=temp->next;
 temp->next=prev;
 prev=temp;
 temp=nex;
 }
 head=prev;}
void print(){
 node* temp=head;
 while(temp != NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
}
cout<<endl;
}
int main(){
int n;
head= NULL;
insert(2);
insert(4);
insert(3);
insert(5);
print();
reverse();
print();
}
