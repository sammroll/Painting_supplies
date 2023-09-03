// P02 Painting Supplies
//		Determines number of gallons of paint given square footage
// Samantha Roldan
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double wallHeight;
	double wallWidth;
	double wallArea;
	double paintNeeded;
	int cansNeeded;
	const double ONE_GALLON_OF_PAINT_COVERAGE = 350;

	cout << "*** P02: Painting Supplies ***\n" << endl;

	//get input from user
	cout << "Enter wall height (feet): ";
	cin >> wallHeight;
	cout << "Enter wall width (feet): ";
	cin >> wallWidth;

	//calculate the wall's area by multiplying the wall height by the wall width
	wallArea = wallHeight * wallWidth;

	//calculate the amount of paint in gallons needed to paint the wall by dividing the
	//	wall area by the constant ONE_GALLON_OF_PAINT_COVERAGE
	paintNeeded = wallArea / ONE_GALLON_OF_PAINT_COVERAGE;

	//Calculate the number of one-gallon cans needed to paint the wall by rounding
	//	to nearest gallon
	cansNeeded = ceil(paintNeeded);

	//Print the results of the wall area, gallons and number cans needed
	cout << endl;
	cout << fixed << setprecision(2); //why doesn't this work??
	cout << "Wall Area: " << wallArea << " square feet" << endl;
	cout << "Paint Needed: " << paintNeeded << " gallons" << endl;
	cout << "Cans Needed: " << cansNeeded << " can(s)" << endl;

	return 0;
}