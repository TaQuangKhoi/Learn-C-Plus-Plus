#include<bits/stdc++.h>

using namespace std;

int main() {
    int n; // Nhập số phần tử của mảng
    cin >> n;

    vector<int> a; // Khởi tạo mảng a có n phần tử
    set<int> se;

    for (int i = 0; i < n; i++) { // Nhập các phần tử của mảng
        int b;
        cin >> b;
        a.push_back(b);
    }

    int q;
    cin >> q; // Nhập số lượng truy vấn

    for (int i = 0; i < q; i++) { // Nhập các truy vấn
        int l;
        cin >> l;

        se.insert(a.begin() + l, a.end());
        cout << se.size() << endl;
        se.clear();
    }
}