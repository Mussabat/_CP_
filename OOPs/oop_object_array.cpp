#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student {
  public:
    string name;
    int age;
    bool gender;
};

int main() {

    int n;
    cin >> n;
    student a[n + 2];
    for(ll i = 0; i < n; i++) {
        cin >> a[i].name;
        cin >> a[i].age;
        cin >> a[i].gender;
    }
    return 0;
}
