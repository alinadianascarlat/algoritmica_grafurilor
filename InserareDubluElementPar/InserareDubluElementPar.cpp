
//Se dă un șir cu n elemente naturale.

//Să se insereze în șir după fiecare element par dublul său.

#include <iostream>

using namespace std;

int main() {
    int n, i, k = 0;
   // cout << "n=";
    cin >> n;
    int v[25];
    for (i = 0; i < n; i++) {
       // cout << "v[" << i << "]="; 
        cin >> v[k];
        if (v[k] % 2 == 0)
            k++;
        k++;
    }
    for (i = 0; i < k; i++) {
        if (v[i] % 2 == 0) {
            v[i + 1] = v[i] * 2; 
            i++;
        }
    }
    for (i = 0; i < k; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

