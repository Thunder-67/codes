#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
void sum(node* n)
{
 int sum=0;
 while(n!= NULL)
 {
  sum=sum+n->data;
  n=n->next;
  }
  cout<<"sum of nodes are "<<sum;}
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
  sum(head);
  return 0;
 }
