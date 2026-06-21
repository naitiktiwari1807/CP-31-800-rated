#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int sum =0;
        vector<int>v(n,0);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        if(sum>0){
            cout<<"-"<<sum<<endl;
        }
        else  cout<<abs(sum)<<endl;
    }
    return 0;
}