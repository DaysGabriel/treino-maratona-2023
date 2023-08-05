#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios:: sync_with_stdio(0);
	cin.tie (0);

	int n;
	cin >> n;
	string num;

	string res = "";
	for (int i = 0; i < n; i++)
	{
		res = "";
		int shift;
		cin >> num >> shift;

		for (int j = 0; j < (int) num.size(); j++)
		{
			res += 'A' + (num[j] - 'A' - shift + 26)%26;
		}
	
		cout << res << "\n";
	}
}
