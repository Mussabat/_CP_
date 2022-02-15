#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student{
public:
    string name;
    ll age;
    bool gender;

    student() {
    }

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
    ll n; cin >> n;

    student a[n + 2];

    for(ll i = 0; i < n; i++) {
        string s;
        ll aa;
        bool g;
        cin >> s >> aa >> g;
        a[i] = student(s, aa, g);
    }

    for(ll i = 0; i < n; i++) {
        a[i].printinfo();
    }

}



