#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double R, x, y;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "R = "; cin >> R; 
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
	
		if ((y <= sqrt(-(x * x) - 2 * x * R) && x >= -R && x <= 0 && y >= 0)
			|| (y >= -sqrt(2 * x * R - x * x) && x >= 0 && x <= R && y <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
		{
			cout << "R = "; cin >> R;
			x = 6. * rand() / RAND_MAX - R;
			y = 6. * rand() / RAND_MAX - R;

			if ((y <= sqrt(-(x * x) - 2 * x * R) && x >= -R && x <= 0 && y >= 0)
				|| (y >= -sqrt(2 * x * R - x * x) && x >= 0 && x <= R && y <= 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}

	return 0;
}