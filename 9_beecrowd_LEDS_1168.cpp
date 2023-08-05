#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string num;
    unsigned long long int contador;
    
    for (unsigned long long int i = 0; i < n; i++)
    {
        cin >> num;
        contador = 0;
        
        for (unsigned long long int j = 0; num[j] != '\0'; j ++)
        {
            if (num[j] == '0')
                contador += 6;
            else if (num[j] == '1')
                contador +=2;
            else if (num[j] == '2')
                contador += 5;
            else if (num[j] == '3')
                contador += 5;
            else if (num[j] == '4')
                contador+= 4;
            else if (num[j] == '5')
                contador+=5;
            else if (num[j] == '6')
                contador += 6;
            else if (num[j] == '7')
                contador += 3;
            else if (num[j] == '8')
                contador+= 7;
            else
                contador+=6;
        }
        cout << contador << " leds\n";
    }
}
