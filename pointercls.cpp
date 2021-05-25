#include<iostream>
using namespace std;
class rectangle
{
public:
 int length;
 int breadth;

 int area()
 {
  return length*breadth;
 }
 int peri()
 {
  return 2*(length+breadth);
  }
};
int main()
{
 rectangle *p=new rectangle;
 p->length=5;
 p->breadth=10;
 cout<<p->area()<<endl;
 cout<<p->peri()<<endl;
}
