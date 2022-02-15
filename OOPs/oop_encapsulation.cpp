#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class A {
  public:
    ll a;
    void funcA() {
        cout << "func A" << '\n';
    }
  private:
    ll b;
    void funcB() {
        cout << "func B" << '\n';
    }
  protected:
    ll c;
    void funcC() {
        cout << "func C" << '\n';
    }
};

int main() {

    A obj;
    obj.funcA();
    //obj.funcB(); //wont't print
}
