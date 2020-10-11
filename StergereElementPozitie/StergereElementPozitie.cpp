
//Se dă un șir cu n elemente întregi și un număr p.Să se șteargă din șirul X elementul aflat pe poziția p.

#include <iostream>
using namespace std;

int a[1501];

int main() {

	int n, i, p;
	//  cout << "Introduceti numarul de elemente n = ";
	cin >> n;
	//cout << "Introduceti sirul de elemente: ";
	//cout << "Introduceti pozitia p = ";
	cin >> p;

	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (i = p - 1; i < n - 1; ++i)
		a[i] = a[i + 1];
	--n;

	for (i = 0; i < n; ++i)
		cout << a[i] << " ";

	return 0;

}

