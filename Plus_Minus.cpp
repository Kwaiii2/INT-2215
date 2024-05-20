#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    cout << fixed << setprecision(6);
    cout << static_cast<double>(positive) / N << endl;
    cout << static_cast<double>(negative) / N << endl;
    cout << static_cast<double>(zero) / N << endl;

    return 0;
}
