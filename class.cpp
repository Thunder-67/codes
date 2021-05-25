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
 rectangle r1;
 cin>>r1.length>>r1.breadth;
 cout<<r1.area()<<endl;
 cout<<r1.peri()<<endl;
}
