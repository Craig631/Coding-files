/*
Author : Craig Nginga
Reg No : BSE-05-0209/2024
Group : 3
Date : 17/03/2024
*/

#include <iostream>
using namespace std;

int year;
float salary;
double bonus;
int age;
int income;

int main() {
	cout<<"Input your salary"<<endl;
	cin>>salary;
	cout<<"Enter years of service"<<endl;
	cin>>year;
	
	if(year > 10){
		cout<<"Net bonus of 12%"<<endl;
		bonus = salary * 12/100;
	} else if(year >= 6 && year <= 10){
		cout<<"Net bonus of 10%"<<endl;
		bonus = salary * 10/100;
	} else if (year < 6){
		cout<<"Net bonus of 8%"<<endl;
		bonus = salary * 8/100;
	}
	
	cout<<"Your bonus is :"<<bonus<<endl;
	cout<<endl;
	
	cout<<"Enter your age :"<<endl;
	cin>>age;
	cout<<"Enter income :"<<endl;
	cin>>income;
	
	if (age >= 21 && income >= 21000 ){
		cout<<"Congratulations you qualify for a loan."<<endl;
	} else if(age < 21 && income < 21000){
		cout<<"Unfortunately, we are unable to offer you a loan at this time."<<endl;
	}
	
return 0;	
}