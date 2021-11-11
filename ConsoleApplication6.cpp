#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{// comment
	int min, max;
	float h, y, x, h;
	cout << "[min, max] and h" << endl;
	cin >> min >> max >> h;
	x = min;
	cout << "while" << endl;
	while (x <= max + h / 2)
	{
		y = (tan(x) + pow(x, 1 / 5) + 2);
		cout << setw(10) << x << setw(10) << y << endl;
		x += h;
	}
	x = min;
	cout << "do while" << endl;
	do
	{
		y = (tan(x) + pow(x, 1 / 2) + 2);
		cout << setw(10) << x << setw(10) << y << endl;
		x += h;
	} while (x <= max + h / 2);
}
