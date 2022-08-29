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
        cout << cur->val << " " << cur->next << '\n';
    }

}

void insertt(node* cur, ll pos, ll dat) {
    if(pos == 1) {
       node* new_node = new node;
       new_node->val = dat;
       new_node->next = cur->next;
       cur->next = new_node;
    }
    else {
        insertt(cur->next, pos - 1, dat);
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
    ll pos, dat; cin >> pos >> dat;
    insertt(head, pos, dat);
    traverse(head);


}
