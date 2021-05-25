#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
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
void display(node* n)
{
 while(n!= NULL){
 cout<<n->data<<" "<<endl;
 n=n->next;}
 }
 int main()
 {
  node*head=NULL;
  node*second=NULL;
  node*third=NULL;
  head=new node();
  second=new node();
  third=new node();
  head->data=5;
  head->next=second;
  second->data=6;
  second->next=third;
  third->data=7;
  third->next=NULL;
  display(head);
  cunt(head);
  return 0;
 }
