//Se da un sir cu n elemente �ntregi, valoare �ntreaga X si un numar p.
//Sa se insereze pe pozitia p �n sir valoarea X.

#include<iostream>
using namespace std;
int main() {
	int v[25], n, i, p, x;
	cout << "Introduceti nr de elemente n = ";
	cin >> n;
	cout << endl;
	for (i = 1; i <= n; i++) {
		cout << " v[" << i << "] = ";
		cin >> v[i];
	}
	for (i = 1; i < n; i++) 
		cout << v[i];
		cout << endl;
		cout << "Introduceti pozitia pe care se insereaza numarul: p =";
		cin >> p;
		cout << "Introduceti numarul ce trebuie inserat: x = ";
		cin >> x;

		for (i = n; i >= p; i--) 
			v[i + 1] = v[i];
			v[p] = x;
			n++;
		
	
	for (i = 1; i <= n; i++) {
		cout << v[i] << " ";
		cout << endl;
	}
}