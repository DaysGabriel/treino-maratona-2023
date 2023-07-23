/*Objective : train the standard header for competitive programming*/
/*date formating*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int h, m, d, mes, a;
	cin >> h >> m >> d >> mes >> a;

	a = a%100;

	cout << setfill('0') << setw(2) << h << ":"
	<< setw(2) << m << " "
	<< setw(2) << d << "/"
	<< setw(2) << mes << "/"
	<< setw(2) << a << "\n";
}
