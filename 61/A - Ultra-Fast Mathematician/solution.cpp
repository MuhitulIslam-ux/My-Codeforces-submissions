#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //your code goes here
    char a[101], b[101];
    cin >> a >> b;
    int l= strlen(a);
    for(int i= 0; i< l; i++)
    {
        if(a[i] != b[i])
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }
    return 0;
}