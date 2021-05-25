#include<iostream>
using namespace std;
class node{
public:
     int data;
     node*next;
};
node*front=NULL;
node*rear=NULL;
void enqueue(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
       front=rear=temp;
       return;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue(){
if(front== NULL){
return;
}
else if(front==rear){
      front=rear=NULL;
}
else{
    front=front->next;
}
}
void print(){
   node*temp;
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main(){
enqueue(2);print();
enqueue(26);print();
enqueue(5);print();
enqueue(4);print();
dequeue();print();
dequeue();print();
dequeue();print();
dequeue();print();
}
