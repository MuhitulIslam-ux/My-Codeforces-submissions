#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char s[4];
    int x = 0, n;
    cin >> n;
    while (n--)
    {
    cin >> s;
    if( s[1] == '+') x++;
    else x--;
    }
    cout << x << endl;
}