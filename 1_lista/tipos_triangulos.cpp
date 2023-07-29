#include <bits/stdc++.h>
using namespace std;

void triangleType(int a, int b, int c)
{
    if (a == b && a == c) cout << "TRIANGULO EQUILATERO" << "\n";
    //isocelebs
    else if (a == b) cout << "TRIANGULO ISOSCELES" << "\n";
    else if (a == c) cout << "TRIANGULO ISOSCELES" << "\n";
    else if (b == c) cout << "TRIANGULO ISOSCELES" << "\n";   
}

void display(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    float a[3];
    
    for (int i =0; i < 3; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a+3); //ordena do endereço base até o último
    
    float a2, b2, c2;
    a2 = a[2] * a[2];
    b2 = a[1] * a[1];
    c2 = a[0] * a[0];
    
    display(a, 3);

    if ((a[0] + a[1]) <= a[2])
    {
        cout << "NAO FORMA TRIANGULO" << "\n";
    }
    else if ( (b2 + c2) == a2)
    {
        cout << "TRIANGULO RETANGULO" << "\n";
    }
    else if ( (b2 + c2) < a2)
    {
        cout << "TRIANGULO OBTUSANGULO" << "\n";
    }
    else if ( (b2+c2) > a2 )
    {
        cout << "TRIANGULO ACUTANGULO" << "\n";
    }
    
    triangleType(a[2], a[1], a[0]);
}