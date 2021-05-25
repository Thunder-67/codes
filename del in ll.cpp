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
void del(int n){
node* temp1=head;
if(n==1){
   head=temp1->next;
   free(temp1);
   return;
}
int i;
for(i=0;i<n-2;i++){
    temp1=temp1->next;
}
node* temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
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
int n;
head= NULL;
insert(2);
insert(4);
insert(3);
insert(5);
print();
cout<<"enter the position ";
cin>>n;
del(n);
print();
}
