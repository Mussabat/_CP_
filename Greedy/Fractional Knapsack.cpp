#include<bits/stdc++.h>
using namespace std;
using pii = pair <int, int>;

bool cmp(pii a, pii b) {
    double r_a = (a.first * 1.0) / a.second;
    double r_b = (b.first * 1.0) / b.second;

    return (r_a > r_b);
}

int main() {
    int n; int W;
    scanf("%d %d", &n, &W);

    pii items[n];
    for (int i = 0; i < n; i++) {
        int value, weight;
        scanf("%d %d", &value, &weight);

        items[i] = {value, weight};
    }

    sort(items, items + n, cmp);

    double ans = 0;
    double remaining_W = W;

    for (int i = 0; i < n; i++) {
        double value = items[i].first;
        double weight = items[i].second;
        double r = value / weight;

        if (weight <= remaining_W) {
            ans += value;
            remaining_W -= weight;
            continue;
        }

        double nibo = r * remaining_W;
        ans += nibo;
        remaining_W = 0;
        break;
    }

    printf("%0.6lf\n", ans);
}
