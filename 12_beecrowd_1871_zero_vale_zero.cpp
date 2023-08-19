#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int m = -1, n = -1;
    
    while (1)
		{   
        cin >> m >> n;
        string resTemp = "";
				string res = "";
        /*Tenhi dúvidas se isso impede a impressão*/
        if (m == 0 && n ==0)
            break;
    
        int sum = m+n;
    
        resTemp = to_string(sum);
        for (int i = 0; i < (int) resTemp.size(); i++)
        {
            if (resTemp[i] != '0')
            {
                res += resTemp[i];
            }
        }
        cout << res << "\n";
	}
}
