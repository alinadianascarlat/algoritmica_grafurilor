//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine 
//indicele liniei pentru care suma elementelor pare este maximă


#include<iostream>
using namespace std;

int main() {
	int a[100][100], n, m, i, j;
	cout << "Introduceti numarul de linii n = ";
	cin >> n;
	cout << "Introduceti numarul de coloane m = ";
	cin >> m;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
			cout << endl;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j];
			cout << endl;
		}
	}

	int  max = 0, linie;
	for (int i = 1; i <= n; ++i)
	{
		int s = 0;
		for (int j = 1; j <= m; ++j)
			if (a[i][j] % 2 == 0)
				s += a[i][j];
		if (s > max)
			max = s, linie = i;
	}

	cout <<linie << endl;
	return 0;
}

