#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0, count1 = 0, count2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                count2++;
            else if (a[i] == 1)
                count1++;
        }
        int sum = count1 - count2;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == -1 && a[i] == a[i + 1])
            {
                flag++;
                break;
            }
        }
        int result;
        if (flag == 1)
            result = sum + 4;
        else if (count1 == n)
            result = n - 4;
        else
            result = sum;
        cout << result << endl;
    }
    return 0;
}