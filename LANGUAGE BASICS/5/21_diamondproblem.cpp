// Multiple Inheritance

#include<iostream>
using namespace std;

class A{
    public:
        int x;
    A(){
        cout << "A" << endl;
    }
};
class B:virtual public A{
public:
B(){
        cout << "B" << endl;
    }
};
class C:virtual public A{
    public:
    C(){
        cout << "C" << endl;
    }
};
class D:public B,public C{
};

int main(){
    D d;
    cout << d.x; // it gives an error(ambiguous call) because two copies of x are present in class d (one from B and one from C)
    // to solve this issue we use virtual keyword
    // by using the virtual keyword the constructor of A is called only once.
    return 0;
}