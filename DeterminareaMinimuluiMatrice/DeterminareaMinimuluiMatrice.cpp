//Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere 
//întregi cu cel mult patru cifre fiecare.
//Să se determine, pentru fiecare coloană, valoarea minimă de pe coloana respectivă.

#include <iostream> 
#include <fstream>

using namespace std;

int main()
{
	ifstream f("mincols.in");
	ofstream g("mincols.out");

	int a[100][100], n, i, j;
	f >> n;
	cout << "n = " << n << endl;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			f >> a[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int  min;
	for (j = 0; j < n; j++) {
		min = a[0][j];
		for (i = 0; i < n; i++)
			if (a[i][j] < min)
				min = a[i][j];
		g << min << " ";
		cout << "Minimul coloanei este " << "=" << min << endl;
	}
}

