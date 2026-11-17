#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        int n, s, x, user_input, sum = 0;
        cin >> n >> s >> x;
        vector<int> array;
        for(int i = 0; i < n; i++)
        {
            cin >> user_input;
            array.push_back(user_input);
            sum += user_input;
        }
        if (sum != s)
        {
            if(sum > s) cout << "NO" << endl;
            else if ((s - sum) % x != 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else cout << "YES" << endl;
    }
}