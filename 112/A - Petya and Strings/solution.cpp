#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
    char s1[101], s2[101];
    cin >> s1 >> s2;
    if (strcasecmp(s1,s2) < 0) cout << "-1"<< endl;
    else if (strcasecmp(s1,s2) > 0) cout << "1"<< endl;
    else cout << "0"<< endl;
    return 0;
}