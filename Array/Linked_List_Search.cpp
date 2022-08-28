#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt;
struct node {
    ll val;
    node* next;
};

void traverse(node* head, ll dat) {
    node* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
        cnt++;
        if(cur->val == dat) {
            cout << "Found at pos -: " << cnt << '\n';
            return;
        }
    }

    cout << "NOT FOUND" << '\n';
}

int main() {
    node* head = new node;
    head->next = NULL;
    node* last;
    last = head;
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        node* cur = new node;
        cur->val = x;
        cur->next = NULL;
        last->next = cur;
        last = cur;
    }
    cnt = 0;
    ll dat; cin >> dat;
    traverse(head, dat);

}



