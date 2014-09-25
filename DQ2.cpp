//Dhruv Datta 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std; 

int main()
{
	cout << "Enter Balance for credit card \n";
	double bal, payment;
	int month;
	
	cin >> bal; 
	
	if (bal <= 0)
	{
		payment = 0;
		month = 1;
		
		cout << setw(10) << "Month " << month << "Payment: " << payment;
	}
	while (bal > 0)
	{
		if (bal <= 10)
		{
			payment = bal;
			bal = 0;
		}
		else if ((bal*0.01 + bal*0.02) < 10)
		{
			payment = 10;
			bal -=10;
		}
		else 
		{		
			payment = bal *0.01 + bal*0.02;
			bal -= bal*0.01;
		}
		month += 1;
		
		cout << "Month " << month << setw(20)<< "Payment: " << payment << setw(20)
			<<"Balance: " << bal <<endl;	
	}
		return 0;
}
