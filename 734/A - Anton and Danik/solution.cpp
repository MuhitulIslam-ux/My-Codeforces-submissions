#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'A') c1++;
        else if (s[i] == 'D') c2++;
    }
    if (c1 < c2) cout << "Danik";
    else if (c1 > c2) cout << "Anton";
    else cout << "Friendship";
}