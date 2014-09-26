#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
	int st1,st2,et1,et2;
	string b1,b2;
	
	cout << "Enter start time, end time and name for boat one" << endl;
	cin >> st1 >> et1 >> b1;
	
	cout << "Enter start time, end time and name for boat one" << endl;
	cin >> st2 >> et2 >> b2;
	
	if (st1 > et1)
		et1 +=  2400;
	if (st2 > et2)
		et2 += 2400;
	
	int t1 = (et1/100*60 + et1%100) - (st1/100*60 + st1%100);
	int t2 = (et2/100*60 + et2%100) - (st2/100*60 + st2%100);
		
	cout << b1 << "took " << t1/60 << " Hours " << t1%60 << " minutes" << endl;
	cout << b2 << "took " << t2/60 << " Hours " << t2%60 << " minutes" << endl;
	
	if (abs(t1-t2) < 5)
		cout << "Boats " << b1 << " and " << b2 << " Tied";
	else if (t1 > t2)
		cout << b1 << " Won!";
	else 
		cout << b2 << " Won!";
	
	return EXIT_SUCCESS;
}
