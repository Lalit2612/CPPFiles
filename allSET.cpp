#include <bits/stdc++.h>
using namespace std;

int main(){
    /*set <string> s;
    cout<<"Enter your name and 4 friends' name\n";
    int q = 5;
    while(q--){
        string str;
        cin>>str;
        s.insert(str);                                          //TC:- O(log(n))
    }
    cout<<"All the names in lexicographical order are:\n";
    for(auto val: s){
        cout<<val<<endl;
    }
    cout<<endl;

    auto it = s.find("Mann");                                  //TC:- O(log(n))
    if(it != s.end())
    s.erase(it);                                            //TC:- O(log(n))

    for(auto val: s){
        cout<<val<<endl;
    }*/

    /*unordered_set <int> us;
    us.insert(47);                                      //TC:- O(1)
    us.insert(44);
    us.insert(55);
    us.insert(70);
    us.insert(67);

    for(auto num: us){
        cout<<num<<" ";
    }
    cout<<endl;
    us.insert(53);

    auto it = us.find(47);                          //TC:- O(1)
    if(it != us.end())
        us.erase(it);                               //TC:- O(1)

    for(auto num: us){
        cout<<num<<" ";
    }*/

    multiset <int> ms;
    ms.insert(47);                                  //
    ms.insert(44);
    ms.insert(18);
    ms.insert(55);
    ms.insert(47);

    for(auto val: ms){
        cout<<val<<" ";
    }
    cout<<endl;

    /*auto it = ms.find(47);
    if(it != ms.end())
        ms.erase(it);

    for(auto val: ms){
        cout<<val<<" ";
    }
    cout<<endl;*/

    ms.erase(47);

    for(auto val: ms){
        cout<<val<<" ";
    }
    cout<<endl;
}
