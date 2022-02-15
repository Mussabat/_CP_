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

class B : public A{
    public:
    ll b;
    void funcB() {
        cout << "HI!! I'm class B" << '\n';
    }
};


int main() {
    B obj;
    obj.funcA();
    obj.funcB();

    return 0;
}


