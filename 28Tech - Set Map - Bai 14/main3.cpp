//
// Created by Admin on 03-Dec-22.
//
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
}