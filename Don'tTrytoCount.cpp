#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m;
        cin>>m;
        string s,x;
        cin>>s>>x;
        int count=0;
        int limit=6;
        while(s.find(x)==string::npos&&count<=limit){
            s=s+s;
            count++;
        }
        if(s.find(x)!=string::npos){
            cout<<count<<endl;
        }
        else cout<<"-1"<<endl;
    }
    

    return 0;
}