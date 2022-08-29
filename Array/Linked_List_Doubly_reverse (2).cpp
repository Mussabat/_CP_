#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
    ll val;
    node* prev;
    node* next;
};

void traverse(node* cur) {

    while(cur->next != NULL) {
        cur = cur->next;
        cout << cur->val << '\n';
    }
}


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
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        node* cur = new node;
        cur->val = x;
        cur->next = NULL;
        cur->prev = last;
        last->next = cur;
        last = cur;
    }

    cout << '\n';

    traverse(head);
    cout << '\n';
    revtraverse(head->next);
}


