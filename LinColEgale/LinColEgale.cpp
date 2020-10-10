
//Se dă o matrice cu n linii şi n coloane şi elemente numere naturale. 
//Să se determine câte elemente ale matricei se află pe linii și coloane de sumă egală.
//Elementul a[i,j] va fi numărat dacă suma elementelor de pe linia i este egală cu cea de pe coloana j.


#include < iostream >
using namespace std;

int main() {
  
        int a[100][100], n, i, j;
        cout << "Introduceti elementele matricei n =";
        cin >> n;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
        }

        for (int i = 1; i < n; i++)
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
                if (j == n)
                    cout << a[i][j] << " ";
            }
        for (int i = n - 1; i > 1; i--)
            cout << a[n - 1][i] << " ";
        for (int i = n - 1; i >= 1; i--)
            for (int j = n - 1; j >= 1; j--) {
                if (j == 1)
                    cout << a[i][j] << " ";
            }

        return 0;
    }




