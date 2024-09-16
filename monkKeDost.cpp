#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector <int> s1,s2;
    while(t--){
        int N,M;
        cin>>N>>M;
        for(int i = 0; i < N+M; i++){
            int num;
            cin>>num;
            if(i < N)
                s1.push_back(num);
            else
                s2.push_back(num);
        }
        for(auto it: s2){
            auto it1 = find(s1.begin(), s1.end(), it);
            if(it1 != s1.end())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
