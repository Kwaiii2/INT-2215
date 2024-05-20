#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int a;
    cin >> a;

    while (a--) {
        int query;
        cin >> query;

        auto it = lower_bound(arr.begin(), arr.end(), query);
        if (*it == query) {
            cout << "Yes " << it - arr.begin() + 1 << endl;
        } else {
            cout << "No " << it - arr.begin() + 1 << endl; 
        }
    }

    return 0;
}