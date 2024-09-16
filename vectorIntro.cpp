# include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v1{10, 20, 30, 40, 50};
    for (int i = 0; i < v1.size(); i++){
        cout<< v1[i] << " ";
    }
    cout << endl;

    vector <int> v2(4);
    for (int i = 0; i < v2.size(); i++){
        cout<< v2[i] << " ";
    }
    cout << endl;

    vector <int> v3(5, 10);
    for (int i = 0; i < v3.size(); i++){
        cout<< v3[i] << " ";
    }
    cout << endl;

    vector <string> v4(3, "hello");
    for (int i = 0; i < v4.size(); i++){
        cout<< v4[i] << " ";
    }
    cout << endl;

    vector <int> v5;
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.push_back(10);
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.push_back(20);
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.push_back(30);
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.push_back(40);
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.push_back(50);
    cout<<"Current Capacity is "<<v5.capacity()<<"\n";
    v5.pop_back();
    cout<<"After first pop Capacity is "<<v5.capacity()<<"\n";
    v5.pop_back();
    cout<<"After second pop Capacity is "<<v5.capacity()<<"\n";
    v5.pop_back();
    cout<<"After third pop Capacity is "<<v5.capacity()<<"\n";
    for(int i = 0; i < v5.size(); i++)
        cout<<v5[i]<<" ";
    cout<<"\n";
    cout<<"First value of v5 is "<<v5.front()<<"\n";
    cout<<"Last value of v5 is "<<v5.back()<<"\n";
    v5.clear();
    cout<<"Capacity after clear is "<<v5.capacity()<<"\n";
    cout<<"Size of vector is "<<v5.size()<<"\n";

    vector <int> v6(5, 10);
    vector <int>:: iterator it = v6.begin();
    v6.insert(it + 3, 30);
    for(int i = 0; i < v6.size(); i++)
        cout<<" "<<v6[i];
}
