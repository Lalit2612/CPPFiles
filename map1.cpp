#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int,string>m;
    m[44] = "Parth";            //This method to insert a value for a key takes log(n) time
    m[47] = "Lalit";
    m[55] = "Sneh";
    m[67] = "Manasi";
    m[70] = "Mann";
    m.insert({53, "Ketul"});      //Same as above
    m[74];                        //Same of above
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    auto i = m.find(67);          //find() returns an iterator to the value at the key passed to the function, takes
    if(i == m.end()){
        cout<<"Kuch nai h yahan par"<<endl;
    }else{
        cout<<(*i).second<<endl;
    }

    m.erase(i);
    for(auto it: m){
        cout<<it.first<<" "<<it.second<<endl;
    }

}
