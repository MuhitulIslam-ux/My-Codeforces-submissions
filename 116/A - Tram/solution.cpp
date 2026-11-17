#include<iostream>
using namespace std;
 
int main()
{
    int n;
    
    cin >> n;
    int a[n], b[n], c[n];
    cin >> a[0] >> b[0];
    c[0]= b[0]-a[0];
    int max= c[0];
    for (int i= 1; i < n; i++)
    {
        cin >> a[i] >> b[i];
        c[i] = c[i-1]+b[i]-a[i];
        
    }
    for (int i= 1; i < n; i++)
    {
        if( max < c[i]) {max = c[i];}
    }
    cout << max;
    return 0;
}