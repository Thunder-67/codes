#include <iostream>

using namespace std;

void fun()
{
 static int a=0;
 a++;
 cout<<a<<endl;
}
int main()
{
 fun();
 fun();
 fun();
 return 0;
}

