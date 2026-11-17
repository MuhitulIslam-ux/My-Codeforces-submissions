// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    int n;
    cin >> n;
    n++;
    int count = 0;
    while(n--)
    {
        string a;
        getline(cin, a);
        if(a[0] == 'T') count += 4;
        else if(a[0]== 'C' ||a[0]== 'c' ) count +=6;
        else if(a[0]== 'O' ||a[0]== 'o') count +=8;
        else if(a[0]== 'D' ||a[0]== 'd') count +=12;
        else if(a[0]== 'I' ||a[0]== 'i') count +=20;
    }
    cout << count;
    return 0;
}