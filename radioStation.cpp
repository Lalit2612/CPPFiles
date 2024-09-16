#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    map<string, string> m1, m2;
    for(int i = 0; i < n; i++){
        string name, ip;
        cin>>name>>ip;
        m1[ip] = name;
    }
    for(int i = 0; i < m; i++){
        string comm, ipAdd;
        cin>>comm>>ipAdd;
        m2[comm] = ipAdd;
    }
    string temp, t;
    for(auto &m2_it: m2){
        auto m2_i = m2.find(m2_it.first);
        if(m2_i != m2.end()){
            temp = m2_i->second;
        }
        temp.erase(remove(temp.begin(), temp.end(), ';'), temp.end());
        auto m1_i = m1.find(temp);
        if(m1_i != m1.end()){
            t = m1_i->second;
        }
        m2_i->second += (" #" + t);
    }

    for(auto &it: m2){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
