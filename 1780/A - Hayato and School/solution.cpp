#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd >= 3)
        {
            int count = 3;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << " ";
                    count--;
                }
                if (count == 0)
                {
                    cout << endl;
                    break;
                }
            }
        }
        else if (odd >= 1 && even >= 2)
        {
            int odd_count = 1, even_count = 2;
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0 && even_count > 0)
                {
                    cout << i + 1 << " ";
                    even_count--;
                }
                if (a[i] % 2 != 0 && odd_count > 0)
                {
                    cout << i + 1 << " ";
                    odd_count--;
                }
                if (even_count <= 0 && odd_count <= 0)
                {
                    cout << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}