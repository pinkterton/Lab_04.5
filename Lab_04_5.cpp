#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R1, R2;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (x > 0 && y > 0 && (x * x + y * y <= R1 * R1) && (x * x + y * y >= R2 * R2) ||
			x < 0 && y < 0 && (x * x + y * y <= R1 * R1) && (x * x + y * y >= R2 * R2))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	double x2, y2, R3 = 0.0, R4;

	double a = -R3;

	cout << "R3 = "; cin >> R3;
	cout << "R4 = "; cin >> R4;

	for (int k = 0; k < 10; k++)
	{
		x2 = a + rand() * (R3 - a) / RAND_MAX;
		y2 = a + rand() * (R3 - a) / RAND_MAX;

		if (x2 > 0 && y2 > 0 && (x2 * x2 + y2 * y2 <= R3 * R3) && (x2 * x2 + y2 * y2 >= R4 * R4) ||
			x2 < 0 && y2 < 0 && (x2 * x2 + y2 * y2 <= R3 * R3) && (x2 * x2 + y2 * y2 >= R4 * R4))
			cout << setw(8) << setprecision(4) << x2 << " "
			<< setw(8) << setprecision(4) << y2 << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x2 << " "
			<< setw(8) << setprecision(4) << y2 << " " << "no" << endl;
	}

	return 0;
}