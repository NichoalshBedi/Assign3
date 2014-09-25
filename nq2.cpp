#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
	double bal, mpay, interest;
	int counter = 0;
	cout << "Whats your ballance? ";
	cin >> bal;
	do
	{
		if (bal < 10)
		{
			mpay = bal;
			bal = 0;	
		}
		else
		{
			interest = 0.02*bal;
			if (bal <= 10)
				mpay = bal + interest;
			else if (0.01*bal + interest > 10)
				mpay = 0.01*bal + interest;
			else
				mpay = 10;
			bal += interest - mpay;
		}	
		
		cout << " Month " << counter
			 << " Payment: " << mpay
			 << " remaining balance: " << bal << endl;
		counter ++;
	} while(bal > 0 && counter < 200);
	
	return EXIT_SUCCESS;
}
	
	
