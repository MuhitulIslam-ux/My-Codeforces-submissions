#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a % b != 0)
        {
            int result = b - (a % b);
            cout << result << endl;
        }
        else
            cout << '0' << endl;
    }
    return 0;
}