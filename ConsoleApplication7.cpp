#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;
int main()
{
	float Z, y;
	//cout << "Input y";
	cin >> y;
	Z = 1;
	for (int m = 1; m <= 5; m++) {
		Z = Z * (m * y);
	}
	y = sin(y) + 2 * Z / pow(y, 3) + 3;
	cout << "Z=" << setprecision(3) << Z << endl;
}

