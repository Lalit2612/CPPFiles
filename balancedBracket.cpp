#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, int>m = {{'{', -3}, {'[', -2}, {'(', -1}, {')', 1}, {']', 2}, {'}', 3}};
    stack<char>s;
    string brac;
    cin>>brac;
    int flag = 0;
    for(int i = 0; i < brac.size(); i++){
        if(m[brac[i]] < 0){
            s.push(brac[i]);
        }
        else{
            if(s.empty())
                flag = 1;
            char t = s.top();
            s.pop();
            if(m[t] + m[brac[i]] != 0)
                flag = 1;
        }
    }
    if(s.empty() &&  flag == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
