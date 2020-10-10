//Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere
//naturale cu cel mult patru cifre fiecare.

//Cerinţa
//Scrieţi un program care citeşte numărul natural n şi cele n* n elemente
//ale tabloului şi apoi afişează elementele chenarului exterior al tabloului, separate
//prin câte un spaţiu.Chenarul este parcurs în sensul
//acelor de ceasornic începând din colţul său stânga - sus.Chenarul este format
//din prima şi ultima linie, prima şi ultima coloană a tabloului.


#include <iostream>

using namespace std;
int a[23][23];

int main() {
	ifstream cin("chenar.in");
	ofstream cout("chenar.out");
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
		cout << a[i][j] << "  ";
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << "a[" << i << "][" << j << "] = ";
		cin >> a[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
			cout << endl;
		}
	}

	for (int i = 1; i < n; i++)
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (j == n)
				cout << a[i][j] << " ";
		}
	for (int i = n - 1; i > 1; i--)
		cout << a[n - 1][i] << " ";
	for (int i = n - 1; i >= 1; i--)
		for (int j = n - 1; j >= 1; j--) {
			if (j == 1)
				cout << a[i][j] << " ";
		}

	return 0;
}



