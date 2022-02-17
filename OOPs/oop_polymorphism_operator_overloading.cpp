#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Complex {
private :
      ll real;
      ll img;
public:
    Complex() { /// default na use krle ...parameter e value r = 0 , i = 0 kora lagbe

    }
    Complex(ll r , ll i) {
        real = r;
        img = i;
    }

    Complex operator + (Complex &obj) {
        Complex res;
        res.real = real + obj.real; /// current real part + obj er real part
        res.img = img + obj.img;

        return res;
    }

    void display() {
        cout << real << "+" << img << "i" << '\n';
    }

};


int main() {
    Complex c1(9, 8);
    Complex c2(8, 5);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}

