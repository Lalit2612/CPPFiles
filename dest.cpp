#include <iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void assignVal(int c, int d){
        a = c; b = d;
    }
    void display(){
        cout<<"the complex number is "<<a<<" + i"<<b<<endl;
    }
    Complex operator+(Complex c1){
        Complex temp;
        temp.a = a + c1.a;
        temp.b = b + c1.b;
        return temp;
    }

};

int main(){
    Complex c1;
    c1.assignVal(4,5);
    c1.display();
    Complex c2;
    c2.assignVal(3,4);
    c1 = c1.operator+(c2);
    c1.display();
}
