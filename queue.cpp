#include<iostream>
using namespace std;

int queue[6],n=6,front=-1,rear=-1;
void enqueue(int x){
if (rear==n-1){
   cout<<"queue overflow "<<endl;
   return;
  }
else if(front==-1&&rear==-1){
   front=0;rear=0;
   }
else{
    rear=rear+1;}
    queue[rear]=x;
}
void dequeue(){
if(front==-1&&rear==-1){
cout<<"queue underflow ";
return;
}
else{
 front++;
 }
}
void print(){
if(front==-1&&rear==-1||front>rear){
   cout<<"queue is empty"<<endl;
   return;}
else{
   cout<<"queue elements are: ";
   for(int i=front;i<=rear;i++){
   cout<<queue[i]<<" ";
   }
   cout<<endl;

}
}
int main(){
enqueue(2);print();
enqueue(5);print();
enqueue(8);print();
dequeue();print();
enqueue(10);print();
enqueue(9);
enqueue(7);
print();
enqueue(95);
print();
dequeue();print();
dequeue();print();
dequeue();print();
dequeue();print();
dequeue();print();
dequeue();print();
}
