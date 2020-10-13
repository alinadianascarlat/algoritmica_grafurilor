
//Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. 
//Să se determine câte elemente ale matricei se află pe linii și coloane de sumă egală.
//Elementul a[i,j] va fi numărat dacă suma elementelor de pe linia i este egală cu cea de pe coloana j.



#include <iostream>
using namespace std;

int n, a[102][102], V[102], H[102];

int main()
{
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			V[i] += a[i][j];
			H[j] += a[i][j];
		}
	}

	int cnt = 0;

	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j)
			if (V[i] == H[j])
				cnt++;

		cout << cnt << " ";

		return 0;
	
}




