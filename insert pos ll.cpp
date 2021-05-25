#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
node* head=NULL;
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
 void insert(int pos,int x){
 node *t,*p;
 t=new node();
 t->data=x;
 if(pos==0){
    t->next=head;
    head=t;
 }
 else if(pos>0){
    p=head;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    t->next=p->next;
    p->next=t;
 }
 }
int main(){
insert(0,1);
insert(1,3);
insert(2,4);
insert(2,2);
insert(0,5);
display();
}
