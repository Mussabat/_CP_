#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> set1{ 1, 2, 3, 4 };
    set<int> set2{ 5, 6, 7, 8 };

    set1.swap(set2);

    cout << "set1 = ";
    for (auto it = set1.begin();
         it != set1.end(); ++it)
        cout << ' ' << *it;

    cout << endl
         << "set2 = ";
    for (auto it = set2.begin();
         it != set2.end(); ++it)
        cout << ' ' << *it;

    return 0;
}
