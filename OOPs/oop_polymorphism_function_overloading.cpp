#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class bom{
    public:
    void fun() {
        cout << "I'm a function with no arguments" << '\n';
    }

    void fun(int x) {
        cout << "I'm a function with int argument" << '\n';
        cout << x << '\n';
    }

    void fun(double y) {
        cout << "I'm a function with double argument" << '\n';
        cout << y << '\n';
    }
};


int main() {
    bom obj;
    obj.fun();
    obj.fun(3);
    obj.fun(4.5);
}

