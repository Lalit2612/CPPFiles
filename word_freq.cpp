#include <bits/stdc++.h>
using namespace std;

string maximumFrequency(string s){
    map<string, int> m;
    string temp;
    cout<<s.size()<<endl;;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            temp = temp + s[i];
        }
        else{
            m[temp]++;
            temp = "";
        }
        cout<<i;
    }
    m[temp]++;
    for(auto j:m)
        cout<<j.first<<" "<<j.second<<endl;
    auto it = m.begin();
    string req = "";
    int maxi = INT_MIN; //it->second;
    //it = ++it;
    while(it != m.end()){
        if(it->second > maxi){
            cout<<"Hi\n";
            maxi = it->second;
            req = req + it->first;
        }
        if(it->second == maxi){
            cout<<"Hello\n";
            if(s.find(it->first) < s.find(req)){
                maxi = it->second;
                req = req + it->first;
            }
        }
    }
    string f = req + " " + to_string(maxi);
    return f;
}
int main(){
    string s;
    getline(cin, s);
    //cout<<s.size();
    cout<<maximumFrequency(s)<<endl;
}
