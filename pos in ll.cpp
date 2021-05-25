#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};
node *head;
void insert(int data,int n){
  node* temp=new node();
  temp->data=data;
  temp->next= NULL;
  if(n==1){
     temp->next=head;
     head=temp;
     return;
 }
 node* temp2=head;
 for(int i=0;i<n-2;i++){
     temp2=temp2->next;
}
 temp->next=temp2->next;
 temp2->next=temp;
}
void print(){
 node* temp=head;
 while(temp != NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
}
}
int main(){
head= NULL;
insert(2,1);
insert(4,2);
insert(3,1);
insert(5,2);
print();
}
