#include<iostream>
using namespace std;
class demo
{
public:
void sum(int a=10,int b=20,int c=30)
{
int s=a+b+c;
cout<<"\n"<<c;
}

};
main()
{
demo d;
d.sum();//10,20,30
d.sum(1,2,3);//1,2,3
d.sum(100);//a=100,b=20,c=30
d.sum(10,200);//a=10,b=200,c=30
}
