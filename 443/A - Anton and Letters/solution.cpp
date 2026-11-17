#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //your code goes here
    string s;
    getline(cin, s);
    int len_s= s.size();
    int n = len_s/3;
    char a[n];
    if(n != 0)
    {
        for(int i = 1, j = 0; i < len_s, j < n; i = i+3, j++)
    {
        a[j] = s[i];
    }
    sort(a, a+n);
    int count = 1;
    for(int i = 0, j = i+1; i < n-1, j < n; i++, j++)
    {
        if(a[i] != a[j] ) count++;
    }
    cout << count;
    }
    else cout << 0;
    
    return 0;
}