#include<iostream>
using namespace std;
class add2;
class add1
{
private:
 int a;
public:
 void setData(int x)
 {
  a=x;
 }
 friend void fun(add1,add2);
};
class add2
{
private:
 int b;
public:
 void setData(int y)
 {
  b=y;
 }
 friend void fun(add1,add2);
};
void fun(add1 c1,add2 c2)
{
 cout<<"sum is\n"<<c1.a+c2.b<<endl;
}
main()
{
 add1 c1;
 add2 c2;
 c1.setData(5);
 c2.setData(8);
 fun(c1,c2);
}
