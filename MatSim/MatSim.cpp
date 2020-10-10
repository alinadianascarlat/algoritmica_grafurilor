//Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. Să se construiască o matrice care să fie
//simetrica față de diagonala principală a matricei date.

#include<iostream>
using namespace std;

int main() {
	int a[100][100], b[100][100], n, i, j;
	cout << "Introduceti numarul de linii n =";
	cin >> n;


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = "; 
			cin >> a[i][j];
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << a[i][j]<<" ";
			cout << endl;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			b[i][j] = a[j][i];		
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << b[i][j]<<" ";
			cout << endl;
		}
	}

	return 0;
}