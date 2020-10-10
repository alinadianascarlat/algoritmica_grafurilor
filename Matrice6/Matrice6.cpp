//Se consideră o matrice pătratică cu n linii şi n coloane şi elemente numere naturale. Să se modifice 
//matricea în felul următor: toate elementele de pe liniile care conţin valoare maximă din
//matrice vor fi mărite cu valoarea minimă din matrice.

#include<iostream>
#include<fstream>

using namespace std;

int a[101][101];

int main() {

	ifstream f("matrice6.in");
	ofstream g("matrice6.out");

	int n, i, j, max;
	f >> n;
	int min;


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			f >> a[i][j];
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	min = a[0][0];
	max = a[0][0];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		int c = 0;
		for (j = 0; j < n; j++) {
			if (a[i][j] == max)
				c++;
		}
		if (c != 0)
			for (j = 0; j < n; j++) {
				a[i][j] = a[i][j] + min;
			}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			g << a[i][j] << " ";
			cout << a[i][j] << " ";
		}
		g << endl;
		cout << endl;
	}

	return 0;
}
