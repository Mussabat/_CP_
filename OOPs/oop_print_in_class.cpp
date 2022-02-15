#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student{
    public:
    string name;
    int age;
    bool gender;

    printinfo() {
        cout << name << " ";
        cout << age << " ";
        cout << gender << '\n';
    }

};

int main() {
    ll n; cin >> n;
    student a[n + 1];

    for(ll i = 0; i < n; i++) {
        cin >> a[i].name;
        cin >> a[i].age;
        cin >> a[i].gender;
    }

    for(ll i = 0; i < n; i++) {
        a[i].printinfo();
    }
}
