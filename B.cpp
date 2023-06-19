#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int v[4];
    
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
    }
    
    double count = 0;
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
    }
    
    count = (floor (count/4)) - 1;
    cout << count << "\n";
}