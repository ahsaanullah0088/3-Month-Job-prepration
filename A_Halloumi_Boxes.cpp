#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]) return false;
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for( int j = 0; j < n; j++){
            cin >> v[j];
        }
        if(k>=2){
            cout << "YES" << endl;
        }else if(k==1){
            if(check(v)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
