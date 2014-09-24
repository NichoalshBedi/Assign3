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
		cout << "What is the length of the 2 adjacen sides in cm? ";
		cin >> adj1 >> adj2;
		cout << "what is the angle in degrees? ";
		cin >> angle;
	} while (adj1 <= 0 || adj2 <= 0 || angle <= 0 || angle >= 180);
	
	//check angle
	string shape = "Parallelogram";
	if(abs(angle - 90) <= 0.5)
	{
		if(abs(adj2-adj1) <= 0.1)
			shape = "Square";
		else
			shape = "Rectangle";
	}
	else
	{
		if(abs(adj2-adj1) <= 0.1)
			shape = "Rhombus";
	}
	
	ofstream fileOut("Shape.txt");
	fileOut << "for a shape of sides " << adj1 << " and " << adj2
			<< " with an angle of " << angle << " is a " << shape << endl;
	fileOut.close();
	return EXIT_SUCCESS;
}
