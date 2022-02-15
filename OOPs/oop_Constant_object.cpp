#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student {
  public:
    void display() const {
        cout << "Displaying Using Constant object" << '\n';
    }

    void play() {
        cout << "Displaying Using Non-Constant object" << '\n';
    }
};


int main() {
    const student obj;  /// constant object non constan function k call dite pare na
    obj.display();

    student ob;
    ob.play();
    return 0;
}

