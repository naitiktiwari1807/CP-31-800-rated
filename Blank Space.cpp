#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v){
            cin>>x;
        }
        int count=0;
        vector<int>e;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
            } 
            e.push_back(count);
            if(v[i]==1){
                count=0;
                e.push_back(count);
            }
        }
        int mx = *max_element(e.begin(), e.end());
         cout << mx<< endl;
        
    }
    return 0;
}
