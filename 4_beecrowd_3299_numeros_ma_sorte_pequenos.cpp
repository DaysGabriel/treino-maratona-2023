#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string msg;
    cin >> msg;
    
    bool t = 0;
    int size = msg.length();

    for (int i = 0; msg[i] != '\0'; i++)
    {
        if (i != size -1)
        {
            if (msg[i] == '1' && msg[i+1] == '3')
            {
                cout << msg << " es de Mala Suerte\n";
                t = 1;
                break;
            }
        }
    }
    if (!t)
    {
        cout << msg << " NO es de Mala Suerte\n";
    }
}
