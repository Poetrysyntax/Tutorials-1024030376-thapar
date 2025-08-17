#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of lower triangular matrix: ";
    cin >> n;

    int low[n*(n+1)/2];
    cout << "Enter lower triangular elements: ";
    for (int i = 0; i < n*(n+1)/2; i++) cin >> low[i];

    cout << "Matrix:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << low[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
