/*
Author : Craig Nginga
Reg No : BSE-05-0209/2024
Group : 3
Date : 17/03/2024
*/

#include <iostream>
using namespace std;

float weight, height;
double BMI;

int main() {
	cout<<"Enter your weight :"<<"kilograms"<<endl;
	cin>>weight;
	cout<<"Enter your height :"<<"meters"<<endl;
	cin>>height;
	
	BMI = weight / (height * height);
	cout<<"The BMI is :"<<BMI<<endl;
	cout<<endl;
	
	if (BMI < 18.5){
		cout<<"Underweight"<<endl;
	} else if (BMI >= 18.5 && BMI <= 24.9){
		cout<<"Normal weight"<<endl;
	} else if (BMI >= 25 && BMI <= 29.9){
		cout<<"Overweight"<<endl;
	} else if (BMI >= 30){
		cout<<"Obesity"<<endl;
	}
	
	return 0;
}