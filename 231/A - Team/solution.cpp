#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, count= 0, p, v, t;
    cin >> n;
    for(int i= 0; i<n; i++)
    {   
        int j= 0;
        cin>> p >> v >> t;
        j= p + v + t;
        if( j > 1) {++count;}
    }
    cout << count<< endl;
}