#include <bits/stdc++.h>
using namespace std;

void printVec(vector <pair<int, string>> v){
    for(int i = 0; i < v.size(); i++){
        cout<<endl<<"The roll no of student "<<i+1<<" is "<<v[i].first<<" and name is "<<v[i].second;
    }
}

void printVecArr(string s, vector <string> v){
    cout<<endl<<"The cities having Vande Bharat in the state "<<s<<" are: "<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}

void printVecVec(vector <string> v){
    cout<<endl<<"The number of centuries of player with their names: "<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<"  ";
    }
}

int main(){
    vector <pair <int,string>> v1;
    cout<<"Enter the number of students\n";
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        int rollno; string name;
        cout<<"Enter the roll no and name of student "<<i+1<<endl;
        cin>>rollno;
        cin>>name;
        v1.push_back(make_pair(rollno, name));
    }
    printVec(v1);

    int num;
    cout<<endl<<"Enter the number of states having Vande Bharat"<<endl;
    cin>>num;
    vector <string> v2[num];
    for(int i = 0; i < num; i++){
        string s;
        cout<<"Enter the name of state "<<i + 1<<endl;
        cin>>s;
        cout<<"Enter the number of cities in state "<<s;
        int c;
        cin>>c;
        for(int j = 0; j < c; j++){
            cout<<"Enter the name of city "<<j + 1<<endl;
            string city;
            cin>>city;
            v2[i].push_back(city);
        }
        printVecArr(s, v2[i]);
        cout<<endl;
    }

    int n;
    cout<<endl<<"Enter the number of players"<<endl;
    cin>>n;
    vector<vector<string>> v3;
    for(int i = 0; i < n; i++){
        int cent; string name;
        cout<<"Enter the number of centuries by player "<<i + 1<<" and his name "<<endl;
        cin>>cent>>name;
        vector <string> temp;
        temp.push_back(name);
        for(int j = 0; j < cent; j++){
            cout<<"Enter the score for century "<<j + 1;
            string score;
            cin>>score;
            temp.push_back(score);
        }
        v3.push_back(temp);
        temp.clear();
    }
    for(int i = 0; i < v3.size(); i++)
        printVecVec(v3[i]);
}
