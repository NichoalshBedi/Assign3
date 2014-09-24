//Dhruv Datta && Nick Bedi
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std; 

int main()
{
	ofstream fout ("stoneshape.txt");
	ifstream fin ("stones.txt");
		
	if (!fin)
	{
		cout<< "WHERE IS THE FILE??? \n";
		return EXIT_FAILURE;
	}
	
	cout << "Enter 2 adjacent side lengths in cm & contained angle\n\n";
	double l1, l2, ang;
	string shape;	

	for (int i = 0; i <= 8; i += 1)
	{	
		fin >> l1 >> l2 >> ang >> shape; 
		
		if (fabs(l1 - l2) <= 0.1 && fabs(ang - 90) <= 0.5)
			shape = "Square";
		else if (fabs(ang - 90) <= 0.5)
			shape = "Rectangle";
		else if (fabs (l1 - l2) <= 0.1)
			shape = "Rhombus";
		else
			shape = "Parallelogram";
	
		if (l1 <= 0 || l2 <= 0 || ang <= 0 || ang >= 180)
		{
			shape = "This is not a shape";
		}
	
		cout<< shape<< ": "<< l1 << " " << l2 <<" "<< ang <<" "<<endl;
		fout<< shape<< ": "<< l1 << " " << l2 <<" "<< ang <<" "<< endl;
	
	}
	fout.close ();
	return EXIT_SUCCESS;
}
/*
Enter 2 adjacent side lengths in cm & contained angle

Square: 1 1 90.4
Rectangle: 1 1.51 89.5
Rhombus: 60.234 60.3165 0.1
Parallelogram: 1.245 1.489 90.501
This is not a shape: 0 1 1
This is not a shape: 1 0 1
This is not a shape: 1 1 0
This is not a shape: -10 -10 -45
This is not a shape: 1 1 180

--------------------------------
Process exited with return value 0
Press any key to continue . . .
*/

