#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    int c[a], sum = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
        if(c[i] <= b) sum += 1;
        else sum += 2;
    }
    cout << sum;
    return 0;
}