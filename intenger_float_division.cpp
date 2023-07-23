/*Objective : train the standard header for competitive programming*/
/*Intenger and float point division*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    
    cout << (int) (a/b) << 
    "\n" << (int) a % (int) b << "\n" <<
    setprecision(2) << fixed << a/b << "\n"; 
}
