#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int k;
        cin>>k;
        vector<int>v(n);
        for(auto &x:v){
            cin>>x;
        }
        bool check=false;
        for(int i=0;i<n;i++){
            if(k==v[i]){
                check=true;
                break;
            }
            else check=false;
        }
        if(check){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}