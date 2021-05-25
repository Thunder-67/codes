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
bool duplicate(){
node *p=head;
node *q=head->next;
while(q!=NULL){
    if(p->data!=q->data){
        p=q;
        q=q->next;
    }
    else{
        p->next=q->next;
        free(q);
        q=p->next;
    }
}
return p;
}
int main(){
insert(9);
insert(9);
insert(8);
insert(8);
insert(5);
insert(5);
insert(3);
display();
duplicate();
display();
}
