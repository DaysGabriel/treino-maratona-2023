#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    bool entrou = 0;
    if (hi == hf && mi == mf)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
        entrou = 1;
//        return 1;
    }
    
    if (hf == 0) hf = 24;
    if (hi == 0) hi = 24;

    

    if (mi > mf)
    {
        hf--;
        mf = mf+60;
    }
        
    
    int hr = hf - hi;
    int mr = mf - mi;

    if (hr < 0)
    {
        hr = hr + 24;
//        return 1;
    }
    if (!entrou)
    {
        cout << "O JOGO DUROU " << hr << " HORA(S) E " << mr <<  " MINUTO(S)\n";    
    }
        
}
