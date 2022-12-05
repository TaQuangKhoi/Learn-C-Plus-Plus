#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;

    // create an random array
    vector<int> a;
    a.reserve(n);
    for (int i = 0; i < n; i++) {
        a.push_back(rand() % 100);
    }
}
