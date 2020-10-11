//Se da un sir cu n elemente întregi, valoare întreaga X si un numar p.
//Sa se insereze pe pozitia p în sir valoarea X.

#include<iostream>
using namespace std;
int main() {
	int v[25], n, i, p, x;
	//cout << "Introduceti nr de elemente n = ";
	cin >> n;

	//cout << "Introduceti numarul ce trebuie inserat: x = ";
	cin >> x;
	//cout << "Introduceti pozitia pe care se insereaza numarul: p =";
	cin >> p;

	for (i = 0; i < n; i++) {
		//cout << " v[" << i << "] = ";
		cin >> v[i];
	}

	for (i = n - 1; i >= p - 1; i--) {
		v[i + 1] = v[i];
	}
	v[p - 1] = x;
	n++;

	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}