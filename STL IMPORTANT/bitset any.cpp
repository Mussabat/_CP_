#include<bits/stdc++.h>

using namespace std;

#define mx 10
int main() {
    bitset<mx>b(string("0001"));
    if(b.any()) {
        cout << "True" << endl; ///kono 1 thakle true return kre;
    }
    else {
        cout << "False" << endl; /// kono 1 na thakle false return kore;
    }
    return 0;
}


