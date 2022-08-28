#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
    ll val;
    node* prev;
    node* next;
};

int main() {
    node* head = new node;
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
}
