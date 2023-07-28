/*https://chat.openai.com/share/b9ce2b10-373d-4ac6-9a5e-2b11a7024842
https://chat.openai.com/share/d674713a-25ac-40a9-98be-2b38735dacaf
https://chat.openai.com/share/b9ce2b10-373d-4ac6-9a5e-2b11a7024842
https://chat.openai.com/share/f58d29f2-83ff-4254-afa6-32c1b5d8e969*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char d;
    string n;

    cin >> d >> n;
    bool prim_ent = 1;

    while (d != '0' && n != "0")
    {
        if (!prim_ent)
            cin >> d >> n;

        string res = "";

        for (unsigned long long int i = 0; n[i] != '\0'; i++)
        {
            if (n[i] != d) res += n[i];
        }

        if (!res.empty()) 
        {
            unsigned long long int resi = stoull(res);
            cout << resi << "\n";
        }
        else
        {
            cout << "0\n";
        }

        prim_ent = 0;
    }
}
