//Write a program in which you declare variables that will hold an hourly wage and
//number of hours worked. Prompt the user to enter values for hourly rate and hours
//worked. Compute and display gross weekly pay, which is calculated as hours times rate
//for the first 40 hours, plus hours times 1.5 times the rate for any hours over 40. Also display net pay, which is gross pay minus withholding; withholding is calculated as 28 percent
//of gross pay if gross pay is over $1000, 21% of gross pay if gross pay is not over $1000 
//but is over $600, and 10% of gross pay if gross pay is not over $600. Save the file as
//OvertimeAndNet.cpp.
#include<iostream>
using namespace std;
main()
{
	int hours,hourly_wage,weekly_pay,gross_pay;
	int withholding,net_pay;
	cout<<"\nenter the values";
	cin>>hours>>hourly_wage;
	//int overtime=hour-40;
	weekly_pay=(40*hourly_wage)+((hours-40)*hourly_wage*1.5);
	cout<<"\nweekly_pay is="<<weekly_pay;
	{
	if(weekly_pay>1000)
	{
		withholding=weekly_pay*0.28;
	}
	else if(weekly_pay>600 && weekly_pay<1000)
	{
		withholding=weekly_pay*0.21;
	}
	else
	{
		withholding=weekly_pay*0.10;
	}
	net_pay=weekly_pay-withholding;
cout<<"\nwithholding="<<withholding;
cout<<"\nNet pay is "<<net_pay;
}}
