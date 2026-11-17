#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,t;
    cin >> m >> t;
    string s;
    cin >> s;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            if(s[j] == 'B' && s[j+1] == 'G') 
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout << s;
    return 0;
}