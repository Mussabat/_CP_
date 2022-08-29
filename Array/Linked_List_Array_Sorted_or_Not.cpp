#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 9e18;


struct node {
    ll val;
    node* next;
};

void traverse(node* head) {

    bool sot = true;
    ll now = -(inf);
    node* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
        if(now > cur->val) {
            sot = false;
        }
        now = cur->val;
    }
    if(sot) {
        cout << "Sorted" << '\n';
    } else {
        cout << "NOT Sorted" << '\n';
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



}



