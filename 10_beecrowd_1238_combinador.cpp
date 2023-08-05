#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string a;
    string b;

    int max; //guarda o tamanho da maior string
    int min; //o oposto
    int resto; //a diferença entre a maior str e a menor
    string res; //a cocatenação
    bool maior; //0 : a, 1 : b
    
    for (int i = 0; i < n; i++)
    {
        res = "";
        cin >> a >> b;
        if (a.size() > b.size())
        {
            max = (int) a.size();
            min = (int) b.size();
            maior = 0;
        }
        else
        {
           max = (int) b.size();
           min = (int) a.size();
           maior = 1;
        }
        
        resto = max - min;
        
        for (int j = 0; j < min; j++)
        {
            res += a[j];
            res += b[j];
        }
        //adiciono os elementos da maior string
        if (resto)
        {
            for (int j = (max - resto); j < max; j++)
            {
                if (maior)
                {
                    res += b[j];
                }
                else
                {
                    res += a[j];
                }
            }
        }
        cout << res << "\n";
    }        
}
