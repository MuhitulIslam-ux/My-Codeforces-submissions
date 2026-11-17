#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m, p[99999];
    cin >> n;
    while(n--)
    {
        int inv = 0;
        cin >> m;
        for (int x = 0; x < m; x++)
        {
            cin >> p[x];
        }
        for (int i = 1; i < m; i++)
        {
            if (p[i-1] > p[i]) 
            {
                inv++;
                i++;
            }
        }
        cout << inv << endl;
    }
    return 0;
}