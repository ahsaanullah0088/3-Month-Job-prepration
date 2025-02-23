#include <bits/stdc++.h>
using namespace std;

bool check(vector <int> v){
    int n = v.size();
    for(int i = 0; i<n ; i++){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}
int main(){
    int t; cin>>t;
    for( int i=0 ;i<t; i++){
        int n; cin>>n;
        int k; cin>>k;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        if(k>=2) cout<<"YES"<<endl;
        else if (k==1){
            if(check(v)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}