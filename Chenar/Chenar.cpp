//Se consider? tabloul bidimensional cu n linii ?i n coloane ce con?ine numere naturale cu cel mult patru cifre fiecare.
//Cerin?a
//Scrie?i un program care cite?te num?rul natural n ?i cele n* n elemente ale tabloului ?i apoi
//afi?eaz? elementele chenarului exterior al tabloului, separate prin câte un spa?iu.Chenarul este parcurs în sensul acelor 
//ceasornic începând din col?ul s?u stânga - sus.Chenarul este format din prima
//?i ultima linie, prima ?i ultima coloan? a tabloului.

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("chenar.in");
ofstream out("chenar.out");

int main(){
	int n;
	int m[24][24];
	in >> n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			in >> m[i][j];

		}
	}

	for (int j = 0; j < n; j++){
		out << m[0][j] << " ";

	}

	for (int i = 1; i < n; i++){
		out << m[i][n - 1] << " ";

	}

	for (int j = n - 2; j >= 0; j--){
		out << m[n - 1][j] << " ";

	}

	for (int i = n - 2; i >= 1; i--){
		out << m[i][0] << " ";

	}

}