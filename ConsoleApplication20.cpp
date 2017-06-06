#include "stdafx.h"
#include "iostream"
using namespace std;
int n, i, tab[100];
int main()
{
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> tab[i];
	}
	if (n == 1) {
		if (tab[0] == 1) {
			cout << "2\n";
		}
		else if (tab[0] == 15) {
			cout << "14\n";
		}
		else {
			cout << "NIE\n";
		}
		return 0;
	}
	if (tab[n-1] - tab[n - 2] > 0) {
		if ((tab[n - 1] + 1) == 15) cout << "14\n";
		else cout << tab[n-1] + 1;
	}
	//else if (tab[n - 1] < tab[n - 2]) {
	else 	if ((tab[n - 1] - 1) == 0) cout << "2\n";
			else cout << tab[n - 1] - 1;
	//}
    return 0;
}

