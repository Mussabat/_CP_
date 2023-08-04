#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;
    while(t--) {
            int n;
    cin >> n;
       multimap<int,int>mp,mt;
        for (int i = 0; i< n ;i++) {
            int x;
            cin >> x;
            if(x%2 == 0){
                mp.insert(pair<int,int>(x,i+1));
            }
            else {
                mt.insert(pair<int,int>(x,i+1));

            }
        }
        if(mp.size()>0) {
            cout << mp.size() << endl;
            for(auto i = mp.begin(); i != mp.end(); i++) {
                cout << i->second << " ";
            }
            cout<<endl;
            continue;
        }
        if(mt.size() == 1) {
            cout << -1 <<endl;
            continue;
        }
        if(mt.size() >= 2)  {
            cout << 2 <<endl;
            int y = 0;
            for(auto i= mt.begin(); i !=mt.end() ; i++) {
                cout << i->second <<" ";
                y++;
                if(y==2)
                {
                    break;
                }

            }
            cout <<endl;
            continue;

        }

    }

   return 0;
}

