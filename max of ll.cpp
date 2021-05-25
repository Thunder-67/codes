#include<iostream>
#define INT_MAX -32767
using namespace std;
class node{
public:
    int data;
    node* next;
};
void maximum(node* n)
{
 int max=INT_MAX;
 while(n!=NULL)
 {
 if(max<n->data)
    max=n->data;
 n=n->next;}
 cout<<"maximum element in node is "<<max;
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
  maximum(head);
  return 0;
 }
