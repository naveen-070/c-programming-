#include<iostream>
using namespace std;
class demo
{
int a,b,c;
public:
demo()//default constr
{
a=10;
b=20;
c=30;
cout<<"\i m default construcotr";
}
demo(int x,int y,int z)//parameterized construcotr
{
a=x;
b=y;
c=z;
cout<<"\nparameterized const";
}
void display()
{
cout<<"a= "<<a<<"\t"<<"b="<<b<<"\t"<<"c="<<c;
}
};
main()
{
demo d;//invoke default
d.display();
demo d1(100,200,300);//parameterized constr
d1.display();
}
