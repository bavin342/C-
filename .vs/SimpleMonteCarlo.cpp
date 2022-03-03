// A SimpleMonteCarlo to price vanilla call option
#include <iostream>
#include <cmath>
using namespace std;
#include <Random1.h>

//Assinging Global variables

double SimpleMonteCarlo(double Expiry,
	double Spot,
	double Vol,
	double r,
	unsigned long NumberOfPaths)
{
	double variance = Vol * Vol * Expiry;
	double rootVariance = sqrt(variance);
	double itocorrection = -0.5 * variance;

	double movedSpot = Spot * exp(r * Expiry + itoCorrection);
	double thisSpot;
	double runningSum = 0;

	for (unsigned long i = 0; i < NumberOfPaths; i++)
	{

	}
}


int main() {

}



