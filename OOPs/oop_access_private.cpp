#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student {
    string name;
  public:
    int age;
    bool gender;

    void setname(string s) {  /// setter function
        name = s;
    }

    printinfo() {
        cout << name << " ";
        cout << age << " ";
        cout << gender << '\n';
    }

};

int main() {
    ll n;
    cin >> n;
    student a[n + 1];

    for(ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        a[i].setname(s);
        cin >> a[i].age;
        cin >> a[i].gender;
    }

    for(ll i = 0; i < n; i++) {
        a[i].printinfo();
    }
}

