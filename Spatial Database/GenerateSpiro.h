#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
# define M_PI           3.14159265358979323846
class Solution {
public:
	void GenerateSpiro() {
		ofstream outfile;
		outfile.open("data.txt");
		double x0 = -118.2890053659624, y0 = 34.02116174797029;
		double R = 5, r = 1, a = 4;
		for (long double t = 0.0; t < (M_PI *10); t += 0.01) {
			long double x = (R + r)*cos((r / R)*t) - a*cos((1 + r / R)*t);
			long double y = (R + r)*sin((r / R)*t) - a*sin((1 + r / R)*t);
			outfile.precision(30);
			outfile << x*0.05 + x0<< "," << y*0.05 + y0<< endl;
		
		}
		outfile.close();
	}
};