#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, wd, result;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> wd;
        result = (wd/3) - 2;
        cout << result << endl;
    }
    return 0;
}