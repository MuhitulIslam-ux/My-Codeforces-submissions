#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    for (int i = 0; i <= size(s); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            c1++;
        }
        else if(s[i] >= 97 && s[i] <= 122)
        {
            c2++;
        }
    }
    if (c1 <= c2)
    {
        for (int i = 0; i <= size(s); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else
    {
         for (int i = 0; i <= size(s); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}