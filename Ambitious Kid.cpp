#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &x:v){
     cin>>x;
   }
   for(int i=0;i<n;i++){
    v[i]=abs(v[i]);
   }
   int mini = *min_element(v.begin(),v.end());
   cout<<mini;
    return 0;
}
