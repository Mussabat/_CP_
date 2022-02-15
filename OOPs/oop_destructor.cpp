#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student{
    public:
    string name;
    ll age;
    bool gender;
    student() {
    cout << "Default constructor" << '\n';
    }

    student(string s, ll a, bool g) {
      cout  << "Parameterized constructor" << '\n';
        name = a;
        age = a;
        gender = g;
    }

    ~student() {
        cout << "Default Destructor" << '\n';
    }

};

int main() {
    student b("Nafisa", 43, 1);
    student a;
    return 0;
}



