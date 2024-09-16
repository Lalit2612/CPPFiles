#include <bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int, string>um;
    um[44] = "Parth";                                       //TC:- O(1)
    um[47] = "Lalit";
    um[55] = "Sneh";
    um[67] = "Manasi";
    um[70] = "Mann";

    for (auto it: um){
        cout<<(it).first<<"    "<<(it).second<<endl;
    }
    cout<<endl;
    um.insert({53, "Ketul"});                               //TC:- O(1)
    for (auto it: um){
        cout<<(it).first<<"    "<<(it).second<<endl;
    }
    cout<<endl;
    um.erase(47);                                           //TC:- O(1)
    for (auto it: um){
        cout<<(it).first<<"    "<<(it).second<<endl;
    }
}
