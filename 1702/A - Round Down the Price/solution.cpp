#include <bits/stdc++.h>
using namespace std;
int digit(int n)
{
    int count=0;
 
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return (count);
}
int main()
{
    int n, x, d;
    cin >> n;
    while(n--)
    {
        cin >> x;
        d = digit(x);
        int ans= x - pow(10,d-1);
        cout << ans << endl;
    }
}