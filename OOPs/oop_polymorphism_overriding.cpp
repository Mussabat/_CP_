#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class base{
public:
    void print() {
        cout << "This is the base class print function" << '\n';
    }

   virtual void display() {
        cout << "This is the base class display function" << '\n';
    }
};


class derived : public base{
public:
    void print() {
        cout << "This is the derived class print function" << '\n';
    }

    void display() {
        cout << "This is the derived class display function" << '\n';
    }
};


int main() {
    base *basepntr;
    derived d;
    basepntr = &d;
    basepntr->print();
    basepntr->display();

    return 0;
}
