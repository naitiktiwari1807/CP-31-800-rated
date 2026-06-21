#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &a:v){
        cin>>a;
    }
   int maxi=*max_element(v.begin(),v.end());
   vector<int>b,c;
   for(int x:v){
    if(x!=maxi){
        b.push_back(x);
    }
    else {
        c.push_back(x);
    }
   }
   if(b.empty()){
    cout<<-1<<endl;
   }
   else {
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int &x:b){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:c){
        cout<<x<<" ";
    }
    cout<<endl;
   }
    }
        return 0;
}