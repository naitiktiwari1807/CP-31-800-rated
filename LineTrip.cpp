#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       vector<int>v(n+1);
       v[0]=0;
       for(int i=1;i<n+1;i++){
        cin>>v[i];
       }
    //   for(int i=0;i<n+1;i++){
    //       cout<<v[i]<<endl;
    //   }
       int m=n+2;
      vector<int>u(m);
      u[m-1]=abs((v[n]-x)*2);
      for(int i=0;i<n;i++){
        int diff=abs(v[i]-v[i+1]);
        u[i]=diff;
      }
    //   for(int i=0;i<m;i++){
    //       cout<<u[i]<<endl;
    //   }
      int maxi= *max_element(u.begin(),u.end());
      cout<<maxi<<endl;
   }
    return 0;
}