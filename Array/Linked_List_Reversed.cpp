#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node {
    ll val;
    node* next;
};


void revtraverse(node* cur) {

    if(cur == NULL) return;
    revtraverse(cur->next);
    cout << cur->val << '\n';
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

    revtraverse(head->next);


}


