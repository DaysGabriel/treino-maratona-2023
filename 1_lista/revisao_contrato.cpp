/*https://chat.openai.com/share/b9ce2b10-373d-4ac6-9a5e-2b11a7024842
https://chat.openai.com/share/d674713a-25ac-40a9-98be-2b38735dacaf*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    char d;
    string n;

    vector<int> pos;

    cin >> d >> n;
    bool prim_ent = 1;

    while (d != '0' && n != "0")
    {
        if (!prim_ent)
            cin >> d >> n;
        
        for (int i = 0; n[i] != '\0'; i++)
        {
            
            if (n[i] == d)
            {
                pos.push_back(i);
            }
        }

        string copy = n;

        
        for (int i = 0; i < (int) pos.size(); i++)
        {
            //cout << "oi" << endl;
            n.erase(pos[i], 1);
        }

        pos.clear();

        if (!n.empty()) 
        {
            unsigned long long int ni = stoull(n);
            cout << ni << "\n";
        }

        n = copy;

        prim_ent = 0;
    }
}
