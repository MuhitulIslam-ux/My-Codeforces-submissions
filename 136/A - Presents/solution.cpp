#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    b[0] = 1;
    for(int i = 0, j = 1 ; i < n, j <= n ; i++, j++)
    {
        cin >> a[i];
        b[a[i] - 1] = j;
    }
    for(int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;    
}