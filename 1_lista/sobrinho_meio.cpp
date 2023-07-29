#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, z, l;

    cin >> h >> z >> l;

    if ( (h > z && h < l) || (h < z && h > l) )cout << "huguinho\n";

    else if ( (z > h && z < l) || (z < h && z > l) ) cout << "zezinho\n";

    else  cout << "luisinho\n";
}