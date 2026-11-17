#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char t[100],count = 1;
    cin >> t;
    for (int i = 0; i < strlen(t); i++)
    {
        if(t[i] == t[i+1]) 
        {
            count++;
            if (count == 7)
                break;
        }
        else
            count = 1;
    }
 
    if (count >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}