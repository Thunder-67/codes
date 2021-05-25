#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
node *head=NULL;
void cunt(node* head)
{
 int cnt=0;
 node* n=head;
 while(n!=NULL){
  cnt++;
  n=n->next;
 }
 cout<<"total elements are "<<cnt<<endl;
}
void display()
{
 node *n=head;
 while(n!= NULL){
 cout<<n->data<<" "<<endl;
 n=n->next;}
 }
void insert(int d){
node *t=new node();
t->data=d;
t->next=head;
head=t;
}
void insorted(node *head,int data){
node *p,*t,*q=NULL;
p=head;
t=new node();
t->data=data;
t->next=NULL;
if(head==NULL){
    head=t;
}
else{
while(p!=NULL&&p->data<data){
    q=p;
    p=p->next;
}
if(p==head){
    t->next=head;
    head=t;
}
else{
    t->next=q->next;
    q->next=t;
}
}
}
int main(){
insert(9);
insert(7);
insert(5);
insert(3);
insorted(head,8);
display();
}
