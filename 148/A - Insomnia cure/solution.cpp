// Online C++ compiler to run C++ program online
#include <iostream>
 
using namespace std;
int main() {
    // Write C++ code here
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1; i <= d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) count++;
    }
    cout << count << endl;
    return 0;
}