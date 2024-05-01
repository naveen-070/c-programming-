#include<iostream>
using namespace std;
struct phone
{
	int code;
	int exchange;
	int number;
};
main()
{
	phone a,b;
	a.code=628;
	a.exchange=184;
	a.number=1966;
	cout<<"\nenter the values for b";
	cin>>b.code>>b.exchange>>b.number;
	cout<<"\ncode"<<a.code<<"\nexchange"<<a.exchange<<"\number"<<a.number;
	cout<<"\ncode"<<b.code<<"\nexchange"<<b.exchange<<"\number"<<b.number;
		
}


