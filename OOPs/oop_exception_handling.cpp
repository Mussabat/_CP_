#include<bits/stdc++.h>
using namespace std;

int main() {

    try{
        int momsage = 30;
        int sonsage = 54;

        if(sonsage > momsage) {
            throw 99;
        }
    }catch(int x) {
        cout << "Son can not be older than MOM, ERROR NUM : " << x << endl;
    }
}
