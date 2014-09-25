#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;

int main()
{
	double adj1,adj2,angle;
	
	do
	{
		cout << "What is the length of the 2 adjacent sides in cm? ";
		cin >> adj1 >> adj2;
		cout << "what is the angle in degrees? ";
		cin >> angle;
	} while (adj1 <= 0 || adj2 <= 0 || angle <= 0 || angle >= 180);
	
	//check angle
	string shape = "Parallelogram";
	if(abs(angle - 90) <= 0.5)
	{
		if(fabs(adj2-adj1) <= 0.1)
			shape = "Square";
		else
			shape = "Rectangle";
	}
	else
	{
		if(fabs(adj2-adj1) <= 0.1)
			shape = "Rhombus";
	}
	
	ofstream fileOut("Shape.txt");
	fileOut << "for a shape of sides " << adj1 << " and " << adj2
			<< " with an angle of " << angle << " is a " << shape << endl;
	fileOut.close();
	cout << "for a shape of sides " << adj1 << " and " << adj2
		 << " with an angle of " << angle << " is a " << shape << endl;
	return EXIT_SUCCESS;
}


/*
//Testing broken lengths and angles
What is the length of the 2 adjacent sides in cm? 0 1
what is the angle in degrees? 1
What is the length of the 2 adjacent sides in cm? 1 0
what is the angle in degrees? 1
What is the length of the 2 adjacent sides in cm? 1 1
what is the angle in degrees? 0
What is the length of the 2 adjacent sides in cm? -10 -10
what is the angle in degrees? -45

//Testing square with error in angle
What is the length of the 2 adjacent sides in cm? 1 1
what is the angle in degrees? 90.4
for a shape of sides 1 and 1 with an angle of 90.4 is a Square

//Testing Rectangle with error in lengths and angle
What is the length of the 2 adjacent sides in cm? 1 1.51
what is the angle in degrees? 89.5
for a shape of sides 1 and 1.51 with an angle of 89.5 is a Rectangle

//Testing Rhombus
What is the length of the 2 adjacent sides in cm? 60.234 60.3165
what is the angle in degrees? 60
for a shape of sides 60.234 and 60.3165 with an angle of 60 is a Rhombus

//Testing Paralleogram
What is the length of the 2 adjacent sides in cm? 1.245 1.489
what is the angle in degrees? 30
for a shape of sides 1.245 and 1.489 with an angle of 30 is a Parallelogram

*/

