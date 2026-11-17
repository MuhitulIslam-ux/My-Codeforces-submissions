#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,count = 0, rem;
    cin >> a;
    for ( b = 5; a != 0; b-- )
    {
        if ( a >= b) count += a/b;
        rem = a%b;
        a = rem;
    }
    cout << count;
    return 0;
}