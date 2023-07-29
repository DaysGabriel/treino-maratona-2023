#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    if (n%2 != 0)
    {
        n = n--;
    }

    for (long long i = 2; i <=n; i+= 2)
    {
        cout << i << "^2 = " << i*i << "\n"; 
    }
}