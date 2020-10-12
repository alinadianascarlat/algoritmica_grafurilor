#include <fstream>
using namespace std;
int a[23][23];

int main() {
	ifstream cin("chenar.in");
	ofstream cout("chenar.out");
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		cin >> a[i][j];

	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if (j == n)
				cout << a[i][j] << " ";
		}
	}
	for (int i = n - 1; i > 1; i--) {
		cout << a[n - 1][i] << " ";
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = n - 1; j >= 1; j--) {
			if (j == 1)
				cout << a[i][j] << " ";
		}
	}
	return 0;
}
