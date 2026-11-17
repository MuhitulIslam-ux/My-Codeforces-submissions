#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[5][5], posi, posj, count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j= 0; j<5; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                posi = i;
                posj = j;
            }
        }
    }
    while(posi != 2)
    {
        if (posi > 2) posi--;
        else posi++;
        count++;
    }
    while(posj != 2)
    {
        if (posj > 2) posj--;
        else posj++;
        count++;
    }
    cout << count << endl;
    return 0;
}