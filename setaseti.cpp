#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    vector <string> v;
    set <int> s;
    cin>>q;
    while(q--){
        int y,x;
        cin>>y>>x;
        if(y == 1){
            s.insert(x);
        }
        else if(y == 2){
            auto it = s.find(x);
            if(it != s.end())
                s.erase(it);
        }
        else if(y == 3){
            auto t = s.find(x);
            if(t == s.end())
                v.push_back("No");
            else
                v.push_back("Yes");
        }
    }

    for(auto i: v)
        cout<<i<<endl;
}
