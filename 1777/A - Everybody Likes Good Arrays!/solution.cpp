#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int arr[a];
        for(int i= 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for(int i= 0; i < a-1; i++)
        {
            if((arr[i] %2 == 0 && arr[i+1] %2 == 0) || (arr[i] %2 != 0 && arr[i+1] %2 != 0))
            {
                arr[i+1] = arr[i+1]*arr[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}