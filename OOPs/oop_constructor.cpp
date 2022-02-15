#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student {
  public:
    string name;
    ll age;
    bool gender;

    student() {
        cout << "default constructor" << '\n';
    }

    student(string s, ll a, bool g) {
        cout << "parameterized constructor" << '\n';
        name = s;
        age = a;
        gender = g;
    }

    student(student &a) {
        cout << "Copy constructor" << '\n';
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void printinfo() {
        cout << name << "   " << age << "  " << gender << '\n';
    }
};


int main() {

    student a("Nafisa", 54, 1);
    a.printinfo();
    student b;
    student c = a;
    c.printinfo();
    return 0;
}

