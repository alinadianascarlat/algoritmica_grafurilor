//Se dă o matrice cu n linii și m coloane și elemente numere naturale. Să se determine 
//indicele liniei pentru care suma elementelor pare este maximă


#include<iostream>
using namespace std;

int main() {
	int n, m;
	//cout << "Introduceti numarul de linii n = ";
	cin >> n;
	//cout << "Introduceti numarul de coloane m = ";
	cin >> m;

	int a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int  max = 0, linie = 0;
	for (int i = 0; i < n; ++i)
	{
		int s = 0;
		for (int j = 0; j < m; ++j)
			if (a[i][j] % 2 == 0)
				s += a[i][j];
		if (s > max)
			max = s, linie = i;
	}

	cout << linie + 1;
	return 0;
}

