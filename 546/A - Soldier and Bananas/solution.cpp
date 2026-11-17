#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long int k,n,w;
    long int t, b;
    cin >> k >> n >> w;
    t = (k* (w*(w+1)))/2;
    b = t - n;
    if( b <= 0) cout << "0";
    else cout << b;
    return 0;
}