#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &v,int n ){
    int s=0;
    for(int i=0;i<n;i++) s+=v[i];
    return s;
}
int product(vector<int> &v, int n){
    int p=1;
    for(int i=0;i<n;i++) p*=v[i];
    return p;
}
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
    if(sum(v,n)>=0&&product(v,n)==1){
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                v[i]=1;
            }
            else v[i]=-1;
            if(sum(v,n)>=0&&product(v,n)==1){
        cout<<i+1<<endl;
        break;
    }
        }
        
    }
    }
   return 0;
}