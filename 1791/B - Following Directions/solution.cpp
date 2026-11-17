#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // your code goes here
    
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y= 0;
        int n, flag = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i= 0; i< n; i++)
        {
            if (a[i] == 'U')
                y++;
            else if (a[i] == 'D')
                y--;
            else if (a[i] == 'R')
                x++;
            else if (a[i] == 'L')
                x--;
            if (x == 1 && y == 1)
                flag++;
        }
        if(flag > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}