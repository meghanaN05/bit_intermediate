#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::gcd
using namespace std;

bool isBeautiful(vector<int>& a) {
    int n = a.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (__gcd(a[i], a[j]) <= 2) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (isBeautiful(a)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
