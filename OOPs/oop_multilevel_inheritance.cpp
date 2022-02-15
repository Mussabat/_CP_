#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class A {
  public:
    ll a;
    void funcA() {
        cout << "HI!! I'm Class A" << '\n';
    }
};

class B : public A {
  public:
    ll b;
    void funcB() {
        cout << "HI!! I'm Class B" << '\n';
    }
};

class C : public B {
  public:
    ll c;
    void funcC() {
        cout << "HI!! I'm Class C" << '\n';
    }
};

int main() {
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}
