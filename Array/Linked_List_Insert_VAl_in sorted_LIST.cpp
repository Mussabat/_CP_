#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node {
    ll val;
    node* next;
};

void insert_sort(node* head, ll dat) {
    node* cur = head;
    while(cur->next != NULL && cur->next->val < dat) {
        cur = cur->next;
    }
    node* new_node = new node;
    new_node->val = dat;
    new_node->next = cur->next;
    cur->next = new_node;
}

void traverse(node* head) {
    node* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
        cout << cur->val <<'\n';
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
    ll  dat;
    cin >> dat;
    insert_sort(head, dat);
    traverse(head);


}


