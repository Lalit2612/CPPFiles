#include <bits/stdc++.h>
using namespace std;

int main(){
    //First method to declare iterator
    vector <int> v{1,2,3,4,5};
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<endl;
    }

    //Range based loops
    vector <string> v1{"Lalit", "Parth", "Sneh"};
    for(string value: v1)
        cout<<value<<endl;

    //Auto Keyword
    vector <float> v3{95.43, 95.13, 90.443};
    for(auto it = v3.begin(); it != v3.end(); it++){
        cout<<*it<<endl;
    }

    //demo: iterator pointer similarity
    vector <pair<int,string>> v4{{44, "Parth"}, {47, "Lalit"}, {55, "Sneh"}};
    for(auto it = v4.begin(); it != v4.end(); it++){
        cout<<(it->first)<<", "<<(it->second)<<endl;
    }
    for(auto it: v4){
        cout<<(it.first)<<", "<<(it.second)<<endl;
    }
}
