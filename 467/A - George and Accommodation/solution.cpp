#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, count = 0;
    cin >> a;
    int c [2];
    for( int i = 0; i < a; i++)
    {
        for(int i = 0; i < 2; i++)
        {
            cin >> c[i];
        }
        int vacancy = c[1] - c[0];
        if (vacancy >= 2) count++;
    }
    cout << count << endl;
    return 0;
}