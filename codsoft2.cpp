#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float a, b, d;
	char c;
	cout << "------------**WELCOME TO THE SIMPLE CALCULATOR**--------------" << endl;
	cout << endl;
	cout << "Enter the first number= ";
	cin >> a;
	cout << "Enter the second number= ";
	cin >> b;
	cout << "Choose the operation(+,-,/,*)= ";
	cin >> c;
	switch (c)
	{
	case '+':
		d = a + b;
		break;
	case '-':
		d = a - b;
		break;
	case '/':
		d = a / b;
		break;
	case '*':
		d = a * b;
		break;
	}
	cout << "RESULT= " << d << endl;
	return 0;
}

