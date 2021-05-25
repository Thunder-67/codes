    #include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
  };
  struct node* head;
  void Insert(int data);
  {
    struct node* temp=(node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
  }
 void print()
 {
   struct node* temp = head;
   printf("list is: ");
   while(temp != NULL)
   {
     printf("%d",temp->data);
     temp=temp->next;
    }
    printf("\n");
}
   void delete(int n);
   {
       struct node* temp1=head;
       if(n==1){
           head=temp1->next;
           free(temp1);
           return;
       }
       int i;
       fot(i=0;i<n-2;i++)
       temp1= temp1->next;
       struct node* temp2=temp->next;
       temp1->next=temp2->next;
       free(temp2);
   }
  int main()
{
  head = NULL;
  insert(2);
  insert(4);
  insert(6);
  insert(5);
  print();
  int n;
  printf("enter the position\n");
  sacnf("%d",&n);
  delete(n);
  print();
}
