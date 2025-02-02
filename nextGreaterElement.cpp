#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i = 0; i < n; i++){
        cin>>v[i];
     }
     stack<int>s;
     vector<int>nge(v.size());
     for(int i = 0; i < v.size(); i++){
        while(!s.empty() && v[i] > v[s.top()]){
            nge[s.top()] = i;
            s.pop();
        }
        s.push(i);
     }
     while(!s.empty()){
        nge[s.top()] = -1;
        s.pop();
     }
     for(int i = 0; i < v.size(); i++){
        cout<<v[i]<< " "<<(nge[i] == -1 ? -1 : v[nge[i]])<<endl;
     }
}
