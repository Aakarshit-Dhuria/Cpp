//! MULTIPLE INHERITANCE
#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    void funcA(){
        cout << "Function A." << endl;
    }
};

class B{
    public:
    void funcB(){
        cout << "Function B" << endl;
    }
};
//! Multiple Inheritance of Classes A and B into C.
class C : public A,public B{
    public:
};

int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}