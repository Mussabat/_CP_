#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class A{
public:
    ll a;
    void funcA() {
    cout << "HI!! I'm class A" << '\n';
    }
};

class B{
public:
    ll b;
    void funcB() {
    cout << "HI!! I'm class B" << '\n';
    }
};

class C : public A, public B{
public:
    ll c;
    void funcC() {
    cout << "HI!! I'm class C" << '\n';
    }
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}
