#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x; 
        
        if (x != 1)
        {
            cout << "YES" << endl; 
            cout << n << endl; 
            for (int i = 1; i <= n; i++) 
                cout << 1 << " ";
            cout << endl;
        }
        else
        {
            if (k == 1 || (k == 2 && n % 2 == 1))
                cout << "NO" << endl; 
            else
            {
                cout << "YES" << endl; 
                
            }
        }
    }
    return 0;
}