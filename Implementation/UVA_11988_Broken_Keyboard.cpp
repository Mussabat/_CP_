#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    string s;
    while(cin >> s) {

        char c = ']';
        string ed = "";
        string st = "";
        deque<string>dq;

        ll f = 0;

        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == '[' || s[i] == ']') {
                c = s[i];
                if(f == 1) {
                    dq.push_front(st);
                    st = "";
                    f  = 0;
                }
                continue;
            }
            if(c == '[') {
                st += s[i];
                f = 1;
            } else {
                if(f == 1) {
                    dq.push_front(st);
                    st = "";
                    f  = 0;
                }
                string p = "";
                p += s[i];
                dq.push_back(p);
            }
        }

        if(f == 1) {
            dq.push_front(st);
            f  = 0;
        }

        while(!dq.empty()) {
            cout << dq.front();
            dq.pop_front();
        }
        cout << '\n';

    }


}

