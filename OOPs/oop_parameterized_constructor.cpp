#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student{
public:
    string name;
    ll age;
    bool gender;

    student(string s, ll a, bool g) {
        name = s;
        age = a;
        gender = g;
    }

    void printinfo() {
        cout << name << "   " << age << "  " << gender << '\n';
    }
};


int main() {

    student a("Nafisa", 54, 1);
    a.printinfo();

}


