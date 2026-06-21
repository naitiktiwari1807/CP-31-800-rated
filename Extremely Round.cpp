#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=10){
            cout<<n<<endl;
        }
        
        else if(n<=100) {
       n=n/10;
       cout<<10+(n-1)<<endl;
    }
        else if(n<=1000){
        n=n/100;
        cout<<19+(n-1)<<endl;
    }
        else if(n<10000){
        n=n/1000;
        cout<<28+(n-1)<<endl;
    }
    else if(n<100000){
        n=n/10000;
        cout<<37+(n-1)<<endl;
    }
    else if(n<1000000){
        n=n/100000;
        cout<<46+(n-1)<<endl;
    }
    }
    return 0;
}
