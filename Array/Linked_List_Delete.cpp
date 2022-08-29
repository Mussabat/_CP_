#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node {
    ll val;
    node* next;
};

void traverse(node* head) {
    node* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
        cout << cur->val << '\n';
    }
}


void dlt(node* cur, ll pos) {
    if(pos == 1) {
        node* baad = cur->next;
        cur->next = baad->next;
        delete(baad);

    }
    else{
        dlt(cur->next, pos - 1);
    }
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
    traverse(head);
    cout << '\n';
    ll pos; cin >> pos;
    cout << '\n' << '\n';
    dlt(head, pos);
    traverse(head);

}



