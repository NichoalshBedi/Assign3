//Dhruv Datta & 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std; 

int main()
{
	ofstream fout ("stoneshape.txt");
	cout << "Enter 2 adjacent side lengths in cm & contained angle\n";
	
	double l1, l2, ang;
	string shape;
		
	cin >> l1 >> l2 >> ang;
	
	while (l1 < 0 || l2 < 0 || ang < 0 || ang >= 360)
	{
		cout << "Please enter proper values\n";
		cin >> l1 >> l2 >> ang;	
	}
	
	if (fabs ((l1 - l2) < 0.1) && fabs((ang - 90) < 0.5))
		shape = "Square";
	else if (fabs((ang - 90) < 0.5))
		shape = "Rectangle";
	else if (fabs ((l1 - l2) < 0.1))
		shape = "Rhombus";
	else
		shape = "Parallelogram";
	
	cout << l1 << " " << l2 <<" "<< ang <<" "<< shape << endl;
	fout << l1 << " " << l2 <<" "<< ang <<" "<< shape << endl;
	fout.close ();
	
	return EXIT_SUCCESS;
}
