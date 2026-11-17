#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int m,n ;
        cin >> n;
        m = n;
        char a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0, j = n - 1; i <= (n / 2) - 1 && j >= (n / 2); i++, j--)
        {
            if(a[i] == '1'  && a[j] == '0')
                m = m-2;
            else if(a[i] == '0' && a[j] == '1')
                m = m-2;
            else if(a[i] == a[j])
                break;
        }
        cout << m << endl;
    }
    return 0;
}