#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, q, user_input, l, r;
        cin >> n >> q;
        vector<int> a, b;
        for(int i = 0; i < n; i++)
        {
            cin >> user_input;
            a.push_back(user_input);
        }
        for(int i = 0; i < n; i++)
        {
            cin >> user_input;
            b.push_back(user_input);
            if (b[i] >= a[i])
                a[i] = b[i];
        }
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] <= a[i+1])
                a[i] = a[i+1];
        }
        int p = q;
        vector<long long> sum_tests;
        vector<long long> prefix(n+1, 0);
        for(int i = 0; i < n; i++)
        {
            prefix[i+1] = prefix[i] + a[i];
        }
        while(p--)
        {
            cin >> l >> r;
            long long sum = prefix[r] - prefix[l-1];
            sum_tests.push_back(sum);
        }
        
        for(int i= 0; i < q; i++)
        {
            cout << sum_tests[i] << ' ';
        }
        cout << endl;
    }
}