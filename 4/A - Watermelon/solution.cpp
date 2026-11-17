#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w,n;
    cin>>w;
    n = w%2;
    if( w!=2 && n == 0 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
    return 0;
}