#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    int count = size(s);
    cin >> s;
    sort(s.begin(),s.end());
    for (int i= 0; i < size(s); i++)
    {
        if(s[i] != s[i+1]) count++;
    }
    if (count%2 != 0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl ;
    return 0;
}