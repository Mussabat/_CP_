#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class student{
public:
    void display() {
        cout << "Displaying Using Pointer" << '\n';
    }
};

int main() {
    student obj;
    student *p = &obj;
    p->display();  /// Selection operator
   //obj.display();
    return 0;
}
