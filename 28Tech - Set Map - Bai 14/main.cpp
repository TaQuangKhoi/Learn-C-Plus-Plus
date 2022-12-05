#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    a.reserve(n);
    set<int> se;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int l;
        cin >> l;

        se.insert(a.begin() + l, a.end());
        cout << se.size() << endl;
        se.clear();
    }

    // thuật toán tìm kiếm nhị phân
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == x) {
                cout << "YES" << endl;
                break;
            } else if (a[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }

    // sàng nguyên tố
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
}