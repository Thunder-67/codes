#include<iostream>
#include<set>
using namespace std;
struct bstnode{
     int data;
      bstnode* left;
      bstnode* right;
};
bstnode* getnewnode(int data){
  bstnode* newnode = new bstnode;
  newnode->data=data;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}
bstnode* insert(bstnode* root,int data){
  if(root==NULL){
  root = getnewnode(data);
  return root;
  }
else if(data <=root->data){
    root->left=insert(root->left,data);
}
else{
 root->right=insert(root->right,data);
}
return root;
}
bool search(bstnode* root,int data){
    if(root==NULL)return false;
    else if(root->data ==data) return true;
    else if(data <=root->data) return search(root->left,data);
    else return search(root->right,data);
}
int height(bstnode* root){
int h;
if(root==NULL)
    return 0;
int x=height(root->left);
int y=height(root->right);
if(x>y)
    return h=x+1;
else
    return h=y+1;
return h;
}
int inorder(bstnode* root){
set<int> s;
if(root==NULL){
    return 0;
}
if(root!=NULL){
    inorder(root->left);
    s.insert(root->data);
    inorder(root->right);
}
return s;
}
int main(){
    bstnode* root=NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,8);
    root = insert(root,20);
    root = insert(root,14);
    root = insert(root,1);
    root = insert(root,80);
    root = insert(root,2);
    height(root);
    inorder(root);
    int number;
    cout<<"enter the number to be search\n";
    cin>>number;
    if(search(root,number)== true) cout<<"found\n";
    else cout<<"not found\n";
}
