#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of tri-diagonal matrix: ";
    cin >> n;

    int tri[3*n - 2];
    cout << "Enter elements row-wise (only 3 diagonals): ";
    for (int i = 0; i < 3*n-2; i++) cin >> tri[i];

    cout << "Matrix:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i-j==0 || i-j==1 || j-i==1) cout << tri[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
