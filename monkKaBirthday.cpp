#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    set <string> s;
    while(t--){
        int N;
        cin>>N;
        fflush(stdin);
        for(int i = 0; i < N; i++){
            string st;
            cin>>st;
            s.insert(st);
        }
        for(auto i: s)
        cout<<i<<endl;
    }
}
