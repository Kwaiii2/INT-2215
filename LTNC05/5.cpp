#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    set<int> s;

    while (Q--) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            s.insert(x);
        } else if (type == 2) {
            s.erase(x);
        } else if (type == 3) {
            auto itr = s.find(x);
            if (itr != s.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
