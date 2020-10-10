#include<iostream>
using namespace std;

int main(){
int n,p,i, j, a[201][201], nord = 0, sud = 0, est = 0, vest = 0;
cin >> n >> p;
for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)
		cin >> a[i][j];
}


     for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)
		if (i < j && i + j < n - 1)
			nord += a[i][j];
		else if (i < j && i + j > n - 1)
			est += a[i][j];
		else if (i > j && i + j < n - 1)
			vest += a[i][j];
		else if (i > j && i + j > n - 1)
			sud += a[i][j];
if (p == 1)
    cout << nord;
if (p == 2)
    cout << est;
if (p == 3)
    cout << sud;
if (p == 4)
    cout << vest;
return 0;
}




