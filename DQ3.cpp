// Dhruv Datta
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//Program assumes no boat will take longer than 23 hours and 59 minutes.

int main()
{
	string boat1, boat2;
	int start1, start2, end1, end2, total1, total2;
	// Times are entered using 24 hour format.
	cout << "Enter name of the first boat, and its start and end times\n";
	cin >> boat1 >> start1 >> end1;
	
	cout << "Enter name of the second boat, and its start and end times\n";
	cin >> boat2 >> start2 >> end2;
	// Total duration is calculated using total minutes. 
	total1 = ((end1/100)*60 + end1%100) - ((start1/100)*60 + start1%100);
	if (total1<0)
		total1 += 1440;
	
	total2 = ((end2/100)*60 + end2%100) - ((start2/100)*60 + start2%100);
	if (total2 <0)
		total2 += 1440;
	
	cout << boat1 <<" took " << (total1/60)<< " hours and "<< total1%60
		<<" minutes." << endl
		<< boat2 <<" took " << (total2/60)<< " hours and "<< total2%60
		<<" minutes." << endl;
	
	if ((total1-total2) >= 5) 
		cout << boat2 << " won the race\n";
	else if ((total2-total1) >= 5)
		cout << boat1 << " won the race\n";
	else 
		cout << "It was a tie! \n";
			
	return 0;
}
