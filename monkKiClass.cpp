#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    map<int, multiset<string>> m;
    for(int i = 0; i < N; i++){
        string name;
        int marks;
        cin>>name>>marks;
        m[-1*marks].insert(name);
    }
    for(auto &stu: m){
        auto &mark = stu.first;
        auto &student = stu.second;
        for(auto &it: student){
            cout<<it<<" "<<-1*mark<<endl;
        }
    }
}
