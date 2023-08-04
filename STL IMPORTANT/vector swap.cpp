#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector1{ 1, 2, 3, 4 };
    vector<int> myvector2{ 3, 5, 7, 9 };

    myvector1.swap(myvector2);
    for (auto it = myvector1.begin();
         it < myvector1.end(); ++it)
        cout << *it << " ";
      cout << endl;
    for (auto it = myvector2.begin();
         it < myvector2.end(); ++it)
        cout << *it << " ";
    return 0;
}
