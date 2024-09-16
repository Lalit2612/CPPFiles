#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(6);

    cout<<"The element on the top of the stack is "<<s.top()<<endl;

    queue<string>q;
    q.push("Lalit");
    q.push("Parth");
    q.push("Sneh");
    q.push("Manasi");

    cout<<"The element on the front of the stack is "<<q.front()<<endl;
}
